#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product {
protected:
    string name;  // 이름
    string addr;  // 주소

public:
    Product(string product_name, string product_addr) {
        name = product_name;
        addr = product_addr;
    }

    virtual void displayInfo() const { // override test를 위해 virtual을 사용
        cout << "Name: " << name << ", Address: " << addr << endl;
    }
};

class BankAccount : public Product {
private:
    string acc_num;  // 계좌 번호
    double acc_bal;  // 계좌 잔액
    string acc_type; // 예금, 적금, 대출
    string main_action; // 주요 동작(입금, 출금, 잔액 조회)

public:
    BankAccount(string bank_name, string bank_addr, string bank_acc_num, double bank_acc_bal, string bank_acc_type, string bank_main_action)
        : Product(bank_name, bank_addr), acc_num(bank_acc_num), acc_bal(bank_acc_bal), acc_type(bank_acc_type), main_action(bank_main_action) {}

    // override
    void displayInfo() const override {
        cout << "Bank Name: " << name << ", Address: " << addr << endl;
        cout << "Account Number: " << acc_num << endl;
        cout << "Balance: " << acc_bal << endl;
        cout << "Account Type: " << acc_type << endl;
        cout << "Main Action: " << main_action << endl;
    }

    // deposit 메서드 오버로드 - 매개변수 타입에 따라 입금 처리
    void deposit(double amount) {
        if (amount > 0) {
            acc_bal += amount;
            cout << "Deposited: " << amount << ", New Balance: " << acc_bal << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // deposit 메서드 오버로드 - int 타입 처리
    void deposit(int amount) {
        if (amount > 0) {
            acc_bal += static_cast<double>(amount);
            cout << "Deposited: " << amount << ", New Balance: " << acc_bal << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // deposit 메서드 오버로드 - string 타입 처리 (숫자 형태의 문자열을 처리)
    void deposit(const string& amount_str) {
        try {
            double amount = stod(amount_str); // 문자열을 double로 변환
            if (amount > 0) {
                acc_bal += amount;
                cout << "Deposited: " << amount << ", New Balance: " << acc_bal << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        } catch (const exception& e) {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // withdraw 메서드
    void withdraw(double amount) {
        if (amount > 0 && acc_bal >= amount) {
            acc_bal -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << acc_bal << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }

    double checkBalance() const {
        return acc_bal;
    }
};

int main() {
    // BankAccount 객체 생성
    BankAccount myAccount("Sample Bank", "123 Main St", "123-456-789", 500.00, "Checking", "Deposit");

    // 계좌 세부 정보 출력
    cout << "Initial Account Details:" << endl;
    myAccount.displayInfo();
    cout << endl;

    // 입금 테스트: double 타입
    cout << "Depositing 200.50:" << endl;
    myAccount.deposit(200.50);
    cout << endl;

    // 입금 테스트: int 타입
    cout << "Depositing 100:" << endl;
    myAccount.deposit(100);
    cout << endl;

    // 입금 테스트: string 타입
    cout << "Depositing '50.75':" << endl;
    myAccount.deposit("50.75");
    cout << endl;

    // 출금 테스트
    cout << "Withdrawing 100.25:" << endl;
    myAccount.withdraw(100.25);
    cout << endl;

    // 잔액 조회 테스트
    cout << "Final Balance:" << endl;
    myAccount.displayInfo();

    return 0;
}

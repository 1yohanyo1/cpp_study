#include <iostream>

using namespace std;


class Product{ // 상속
protected:
    string name; // 이름
    string addr; // 주소

public:
    Product(string product_name, string product_addr){
        name = product_name;
        addr = product_addr;
    }

    void displayInfo() const{
        cout << "Name: " << name << ", Address : " << addr << endl;
    }
};

class BankAccount : public Product{
private:
    // string name; // 이름
    // string addr; // 주소
    string acc_num; // 계좌 번호
    string acc_bal; // 계좌 잔액
    string acc_type; // 예금, 적금, 대출
    string main_action; // 주요 동작(입금, 출금, 잔액 조회)

public:
    BankAccount(string bank_name, string bank_addr, string bank_acc_num, string bank_acc_bal, string bank_acc_type, string bank_main_action)
    : Product(bank_name, bank_addr){
        // name = bank_name;
        // addr = bank_addr;
        acc_num = bank_acc_num;
        acc_bal = bank_acc_bal;
        acc_type = bank_acc_type;
        main_action = bank_main_action;

    }

    void displayAccountDetails() const{
        displayInfo(); // name, address
        cout << "Account Number : " << acc_num << endl;
        cout << "Balance : " << acc_bal << endl;
        cout << "Account Type : " << acc_type << endl;
        cout << "Main Action : " << main_action << endl;

    }
};

class Customer : public Product{
private:
    // string name; // 이름
    // string addr; // 주소
    string phone_num; // 전화번호
    int age; // 나이

public:
    Customer(string cus_name, string cus_addr, string cus_phone_num, int cus_age)
    : Product(cus_name, cus_addr){
        // name = cus_name;
        // addr = cus_addr;
        phone_num = cus_phone_num;
        age = cus_age;
    }

    void displayCustomerDetails() const{
        displayInfo(); // name, addr
        cout << "Phone Number : " << phone_num << endl;
        cout << "Age : " << age << endl;

    }
};





int main(){
    BankAccount account("yohan", "seoul", "351-0202-8765-05", "10,000", "Savings", "Deposit");
    account.displayAccountDetails();
    cout << endl;

    Customer customer("john", "gyeonggi", "123-4567-8978", 26);
    customer.displayCustomerDetails();
    cout << endl;


    return 0;
}





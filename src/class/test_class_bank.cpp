#include <iostream>

using namespace std;

class bank{
private:
    int safe; // 금고

public:
    bank(); // 생성자
    void use_counter(int _in, int _out); // 입출금 창구 함수

};

bank::bank(){
    safe = 1000;
    cout << "최초 금고 : " << safe << endl;
    cout << endl;

}

void bank::use_counter(int _in, int _out){
    safe += _in; // 입금
    safe -= _out; // 출금

    cout << "입금 : " << _in << endl;
    cout << "출금 : " << _out << endl;
    cout << "금고 : " << safe << endl;
    cout << endl;

}

int main(){
    bank my_bank; // my_bank 인스턴스 생성

    my_bank.use_counter(0, 20);
    my_bank.use_counter(50, 0);
    my_bank.use_counter(100, 50);

    return 0;

}
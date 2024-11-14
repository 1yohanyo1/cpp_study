#include <iostream>
#include <cstdlib>

using namespace std;

void myterminate(){
    cout << "myterminate called" << endl;
    exit(-1); // 프로그램 비정상 종료

}

int main(){
    set_terminate(myterminate); // 종료 처리 함수 지정
    throw 1; // 예외 발생

    return 0;
}
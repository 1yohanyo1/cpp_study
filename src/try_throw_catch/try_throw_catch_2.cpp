#include <iostream>

using namespace std;


void func_throw(){
    cout << "func_throw()" << endl;
    cout << "throw -1" << endl;

    throw -1;
    cout << "after throw -1" << endl;

}

int main(){
    try{
        func_throw();
    }
    catch (int exec){ // 정수 형식 예외 받기
        cout << "catch " << exec << endl;
    }
}
// 함수에서 예외가 처리되지 않아서 함수를 호출한 쪽으로 전달되는
// 현상을 가리켜 스택 풀기(stack unwinding)라고 한다.
// 스택에 쌓인 역순으로 전달하므로 스택 풀기
#include <iostream>

using namespace std;

void func(){
    int a = 10; // 지역 변수
    static int b = 10; // 정적 변수. 처음 호출될 때 한 번만 초기화

    a++;
    b++;

    cout << "a : " << a << ", b : " << b << endl;

}

int main(){
    func();
    func();
    func();
    func();
    func();
    
    return 0;


}
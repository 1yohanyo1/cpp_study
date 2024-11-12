#include <iostream>

using namespace std;



int main(){
    int customer_num = 0;

    cout << "today costomer : ";
    cin >> customer_num; // 손님 수 입력

    string *bread = new string[customer_num]; // 손님 수 만큼 동적 메모리 생성

    for (int i = 0; i < customer_num; i++){
        bread[i] = "bread_" + to_string(i); 
    }
    
    cout << endl << "---create bread" << endl;

    for (int i = 0; i < customer_num; i++){
        cout << *(bread + i) << endl; // 생산된 빵 출력
    }

    delete[] bread; // 동적 메모리 해제

    return 0;


}
#include <iostream>

using namespace std;

int main(){
    try{
        int input;
        cout << "input int : ";
        cin >> input;

        if (input > 0){
            cout << "throw 1" << endl;
            throw 1;
            cout << "after throw 1 " << endl;

        }

        if (input < 0){
            cout << "throw -1.0f " << endl;
            throw -0.1f;
            cout << "after throw -1.0f" << endl;

        }
        
        if (input == 0){
            cout << "throw Z" << endl;
            throw 'Z';
            cout << "after throw Z " << endl;

        }
    }

    catch (int a){
        cout << "catch " << a << endl;

    }
    catch (float b){
        cout << "catch " << b << endl;

    }
    catch (...){ // 처리되지 않은 나머지 예외 모두 받기
        cout << "catch all" << endl;

    }

    return 0;

}
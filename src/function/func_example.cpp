#include <iostream>

using namespace std;

int add(int _x, int _y){
    int result = _x + _y;

    return result;
}


int main(){
    int add_result = add(2, 3);

    cout << "result : " << add_result << endl;

    return 0;


}
#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int b = 10;

    int *pa = &a;
    int *pb = &b;

    // 주소 값 출력
    cout << "&a : " << pa << endl;
    cout << "&b : " << pb << endl;

    // 역참조
    cout << "a : " << *pa << endl;
    cout << "b : " << *pb << endl << endl;

    /////////////////////////////////
    // array pointer

    int array[5] = {1, 2, 3, 4, 5};
    int *parray = array;

    cout << "array : " << array << endl;
    cout << "pointer_array : " << parray << endl << endl;

    cout << "sizeof(array) : " << sizeof(array) << endl;
    cout << "sizeof(parray) : " << sizeof(parray) << endl;

    return 0;
}
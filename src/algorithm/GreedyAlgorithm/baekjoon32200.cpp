#include <iostream>
using namespace std;

int main(){
    int N, X, Y; // N: 샌드위치 개수/ X, Y: 샌드위치 자르는 길이
    cin >> N >> X >> Y;

    for(int i = 0; i < N; i++){
        int L; // L: 샌드위치 길이
        cin >> L;
        cout << L << endl;
    }

    cout << N << X << Y;


    return 0;
}
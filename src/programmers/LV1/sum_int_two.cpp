#include <iostream>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long temp = 0;

    // a > b일 때.
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        answer += i;
    }

    return answer;
}

int main() {
    long long result1 = solution(3, 5);
    long long result2 = solution(3, 3);
    long long result3 = solution(5, 3);

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;
    cout << "result3 : " << result3 << endl;

    return 0;
}

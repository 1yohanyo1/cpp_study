#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str_n = to_string(n);
    sort(str_n.begin(), str_n.end(), greater<char>());

    answer = stoll(str_n);

    return answer;
}

int main(){
    long long result = solution(118372);

    cout << "result : " << result << endl;

    return 0;
}


// 1. 정수 n을 string으로 변환
// 2. string 내림차순 정렬
// 3. 정수형 변환
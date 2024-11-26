#include <iostream>

using namespace std;

int solution(int n){
    int answer = 0;
    string str_n = to_string(n);

    for (int i = 0; i < str_n.length(); i++){
        answer += str_n[i] - '0'; // 문자 - 문자, 아스키 코드를 이용한 연선

    }
    return answer;    
}

int main(){
    int result = solution(1243);

    cout << result << endl;

    return 0;

}
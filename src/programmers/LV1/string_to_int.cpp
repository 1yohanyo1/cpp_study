#include <iostream>

using namespace std;

int solution(string s){
    int answer = 0;
    answer = stoi(s);
    
    return answer;

}

int main(){
    int result1 = solution("1234");
    int result2 = solution("-1234");

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;

    return 0;
}
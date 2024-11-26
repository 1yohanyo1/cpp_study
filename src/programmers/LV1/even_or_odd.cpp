#include <iostream>

using namespace std;

string solution(int num){
    string answer = "";
    if(num % 2 == 0){
        answer.append("Even");
    }else{
        answer.append("Odd");
    }
    return answer;
}

int main(){
    string result = solution(3);

    cout << result << endl;

    return 0;

}
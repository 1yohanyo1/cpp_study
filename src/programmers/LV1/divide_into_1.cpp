#include <iostream>

using namespace std;

int solution(int n){
    int answer = 0;

    for (int i = 1; i < n; i++){
        if (n % i == 1){
            answer = i;
            break;
        }
    }
    return answer;
}

int main(){
    int result1 = solution(10);
    int result2 = solution(12);

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;

    return 0;

}
#include <iostream>

using namespace std;

int solution(int n){
    int answer = 0;
    for (int i = 1; i < n+1; i++){
        if (n % i == 0){
            answer += i;

        }
    }
    return answer;
}

int main(){
    int result = solution(5);

    cout << result << endl;

    return 0;

}

// n을 1부터 n까지 나눠서 나온 값들을 합해서 return 
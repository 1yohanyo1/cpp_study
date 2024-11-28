#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B){
    int answer = 0;

    sort(A.begin(), A.end()); // 오름차순 정렬
    sort(B.rbegin(), B.rend()); // 내림차순 정렬
    
    for (int i = 0; i < A.size(); i++){
        answer += A[i] * B[i];
    }

    return answer;

}

int main(){
    int result1 = solution({1, 4, 2}, {5, 4, 4});
    int result2 = solution({1, 2}, {3, 4});

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;

    return 0;
}

// 1. vector A는 오름차순, vector B는 내림차순
// 2. 각 index를 곱하고 합하여 return answer
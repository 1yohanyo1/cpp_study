#include <iostream>
#include <vector>

using namespace std;

vector <long long> solution(int x, int n){
    vector <long long> answer;
    for (int i = 0; i < n; i++){
        answer.push_back(x*(i+1));
    }
    return answer;
}

int main(){
    vector <long long> result1 = solution(2, 5);
    vector <long long> result2 = solution(4, 3);
    vector <long long> result3 = solution(-4, 2);

    for(int num : result1){
        cout << num << " ";
    } 
    cout << endl;
    for(int num : result2){
        cout << num << " ";
    } 
    cout << endl;
    for(int num : result3){
        cout << num << " ";
    } 
    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str_n = to_string(n);

    for (int i = str_n.length() - 1; i >= 0; i--){
        answer.push_back(str_n[i] - '0');
    }

    return answer;
}

int main(){
    vector<int> result = solution(12345);

    cout << "result : ";
    for (int i : result){
        cout << i;
    }
    cout << endl;
    return 0;
}
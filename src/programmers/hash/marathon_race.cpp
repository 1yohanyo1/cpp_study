// 1. 명단의 첫 번째 string부터 마지막까지 search 하기
// 2. 1번 string이 2번string에 있는지 find를 사용하여 찾기
// 3. if 있으면 pop_back을 사용하여 제거
// 4. 남은 2번 string return


#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    vector<string> new_string;
    for (string str1 : participant){
        for (string str2 : completion){
            if (str1 != str2){
                new_string.push_back(str1);

            }
        }
    }


    return answer;
}

int main() {
    vector<string> participant1 = {"leo", "kiki", "eden"};
    vector<string> completion1 = {"eden", "kiki"};
    cout << "Result 1: " << solution(participant1, completion1) << endl;

    vector<string> participant2 = {"marina", "josipa", "nikola", "vinko", "filipa"};
    vector<string> completion2 = {"josipa", "filipa", "marina", "nikola"};
    cout << "Result 2: " << solution(participant2, completion2) << endl;

    vector<string> participant3 = {"mislav", "stanko", "mislav", "ana"};
    vector<string> completion3 = {"stanko", "ana", "mislav"};
    cout << "Result 3: " << solution(participant3, completion3) << endl;

    return 0;
}
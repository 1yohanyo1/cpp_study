#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;

    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'p' || s[i] == 'P'){
            p++;
        }else if(s[i] == 'y' || s[i] == 'Y'){
            y++;
        }
    }

    //1. p == y, true, p != y, false, else trun;
    if (p != y){
        answer = false;
    }
    return answer;
}

int main(){
    bool result1 = solution("pPoooyY");
    bool result2 = solution("Pyy");

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;

    return 0;
}
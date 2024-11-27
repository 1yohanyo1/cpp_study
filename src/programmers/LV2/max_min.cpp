#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> nums;
    istringstream ss(s);
    int num;
    
    while (ss >> num) {
        nums.push_back(num);
    }

    int minVal = *min_element(nums.begin(), nums.end());
    int maxVal = *max_element(nums.begin(), nums.end());

    return to_string(minVal) + " " + to_string(maxVal);
}

int main() {
    string result1 = solution("1 2 3 4");
    string result2 = solution("-1 -2 -3 -4");
    string result3 = solution("-1 -1");

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;
    cout << "result3 : " << result3 << endl;

    return 0;
}

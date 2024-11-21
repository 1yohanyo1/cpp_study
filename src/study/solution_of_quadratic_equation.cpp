#include <iostream>
#include <cmath>

using namespace std;

// x^2 - 10x + 18 = 0;

// 두 근의 중앙값 x 구하는 함수
float func1(float alpha, float beta){
    return -beta / 2 * alpha;
}

// 두 근의 곱 y를 구하는 함수
float func2(float alpha, float charlie){
    return charlie/alpha;
}

int main(){
    float a = 0; // x^2 의 계수
    float b = 0; // x의 계수
    float c = 0; // 상수항

    // 두 근의 해
    float answer1 = 0;
    float answer2 = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    float middle = func1(a, b);
    float t = sqrt(middle * middle - func2(a, c));

    answer1 = t - middle;
    answer2 = t + middle;

    cout << "answer1 : " << answer1 << ", answer2 : " << answer2 << endl;
    cout << "middle : " << middle << ", t : " << t << endl;

    return 0;
}


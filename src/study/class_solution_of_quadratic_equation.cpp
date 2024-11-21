#include <iostream>
#include <cmath>

using namespace std;

class QuadraticEquation {
private:
    float a, b, c;

public:
    QuadraticEquation(float coefA, float coefB, float coefC){

    a = coefA;
    b = coefB;
    c = coefC;
    }

    float middle(){
        return -b / (2 * a);
    }

    float multiply(){
        return c / a;
    }

    void solve(){
        float t = middle();
        float xSquared = t*t - multiply();
        float answer1, answer2;
        
        if (xSquared >= 0){ // 양수
            float x = sqrt(xSquared);
            float answer1 = t + x;
            float answer2 = t - x;

            cout << "answer1 : " << answer1 << ", answer2 : " << answer2 << endl;


        }else{ // 음수(복소수)
            float imaginaryPart = sqrt(-xSquared);

            cout << "Root 1: " << t << " - " << imaginaryPart << "i" << endl;
            cout << "Root 2: " << t << " + " << imaginaryPart << "i" << endl;
        }

    }
};

int main(){
    float a, b, c;
    
    cout << "ax^2 + bx + c = 0" << endl << "input a, b ,c" << endl;
    cin >> a >> b >> c;

    QuadraticEquation my_equation(a, b, c);

    my_equation.solve();

    return 0;

}
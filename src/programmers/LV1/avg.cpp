#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> arr){
    double answer = 0;
    for(int i = 0; i < arr.size(); i++){
        answer += arr.at(i);


    }
    
    return answer/arr.size();

} 

int main(){
    double result1 = solution({1,2,3,4});
    cout << "result1 : " << result1 << endl;
    double result2 = solution({5,5});
    cout << "result2 : " << result2 << endl;
    return 0;
 
}
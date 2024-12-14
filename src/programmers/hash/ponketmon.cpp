// 1. nums 배열의 size/2
// 2. nums 배열 중복 값 제거
// 3. 1번 2번 중 작은 값을 return

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> new_vector;
    int size = nums.size() / 2;
    
    // 중복된 값 제거
    for (int num : nums){
        if(find(new_vector.begin(), new_vector.end(), num) == new_vector.end()){
            new_vector.push_back(num);
        }
    }

    int new_size = new_vector.size();

    answer = min(size, new_size);

    return answer;
}

int main() {
    vector<int> nums1 = {3, 1, 2, 3};
    vector<int> nums2 = {3, 3, 3, 2, 2, 4};
    vector<int> nums3 = {3, 3, 3, 2, 2};

    int result1 = solution(nums1);
    int result2 = solution(nums2);
    int result3 = solution(nums3);

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}
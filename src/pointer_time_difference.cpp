#include <iostream>
#include <chrono>
#include <vector>
using namespace std;
using namespace chrono;

const int SIZE = 100000000; // 배열의 크기

long long sumWithCopy(vector<int> arr) {
    long long sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
    }
    return sum;
}

long long sumWithPointer(int* arr, int size) {
    long long sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    vector<int> largeArray(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        largeArray[i] = i; // 초기화
    }

    auto start = high_resolution_clock::now();
    long long result1 = sumWithCopy(largeArray);
    auto end = high_resolution_clock::now();
    auto durationWithCopy = duration_cast<microseconds>(end - start).count();

    start = high_resolution_clock::now();
    long long result2 = sumWithPointer(largeArray.data(), SIZE);
    end = high_resolution_clock::now();
    auto durationWithPointer = duration_cast<microseconds>(end - start).count();

    // 출력
    cout << "Result with copy: " << result1 << ", Time: " << durationWithCopy << " microseconds" << endl;
    cout << "Result with pointer: " << result2 << ", Time: " << durationWithPointer << " microseconds" << endl;

    return 0;
}

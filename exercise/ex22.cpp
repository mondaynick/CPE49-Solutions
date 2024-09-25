/*
 * 11461 Square Numbers
 * 輸入兩筆整數，輸出範圍中平方數的個數，直到輸入的兩筆整數皆為0
 * 輸入:
 * 1 4
 * 1 10
 * 0 0
 * 輸出:
 * 2
 * 3
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 留意sqrt的小數點誤差問題
    int min, max;
    while (cin >> min >> max) {
        if (min == 0 && max == 0) break;
        min = ceil(sqrt(min - 0.1));  // 小的減小的數字再進位
        max = floor(sqrt(max + 0.1)); // 大的加小的數字再捨去
        cout << max - min + 1 << endl;
    }
    return 0;
}
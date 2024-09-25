/*
 * 11332 Summing Digits
 * 輸入一整數，計算其各位數之和，直到該位數只剩一位，輸入直到為0跳出
 * 輸入:
 * 2
 * 11
 * 47
 * 1234567892
 * 0
 * 輸出:
 * 2
 * 2
 * 2
 * 2
 */

#include <iostream>

using namespace std;

int main() {
    int num;
    while (cin >> num && num != 0) {
        while(num / 10) {
            int count = 0;
            while (num) {
                count += num % 10;
                num /= 10;
            }
            num = count;
        }
        cout << num << endl;
    }
    
    return 0;
}
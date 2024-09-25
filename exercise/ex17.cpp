/*
 * 10170 The Hotel with Infinite Rooms
 * 輸入為初始團員人數和想求第幾天的飯店人數，團員有n人會住n天，且退房後下一批必為n+1人
 * 輸入:
 * 1 6
 * 3 10
 * 3 14
 * 輸出:
 * 3
 * 5
 * 6
 */

#include <iostream>

using namespace std;

int main() {
    long long int capacity; // 記錄目前飯店所容納的旅客數量
    long long int day;      // 要求第幾天
    int people;             // 當前團員數

    while(cin >> people >> day) {
        long long int base = 0;
        while (1) {
            base += people;
            if (day <= base)
                break;
            else
                people++;
        }
        cout << people << endl;
    }
    return 0;
}
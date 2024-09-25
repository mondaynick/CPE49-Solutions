/*
 * 11150 Cola
 * 輸入剛開始持有幾罐可樂，輸出最多可以喝到幾罐可樂
 * 三罐空瓶子可以換一罐可樂，若最後剩下兩罐可樂則可以借一個空罐子換一罐新的喝完再還回去
 * 輸入:
 * 8
 * 輸出:
 * 12
 */

#include <iostream>

using namespace std;

int main() {
    int cola;  // 目前持有幾罐可樂
    int count; // 目前喝完幾罐可樂

    while (cin >> cola) {
        count = 0;
        while (cola >= 3) {
            count += 3;
            cola -= 2;
        }
        if (cola == 2) {
            count += 3;
        } else {
            count += cola;
        }
        cout << count << endl;
    }
    return 0;
}
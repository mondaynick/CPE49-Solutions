/*
 * 10071 Back to High School Physics
 * 輸出兩倍時間之後的移動總距離，分別輸入速度和時間，d = 2vt
 * 輸入:
 * 0 0
 * 5 12
 * 輸出:
 * 0
 * 120
 */

#include <iostream>

using namespace std;

int main() {
    int v, t;
    while (cin >> v >> t) {
        cout << 2 * v * t << endl;
    }
    return 0;
}
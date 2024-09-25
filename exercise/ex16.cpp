/*
 * 10056 What is the Probability?
 * s = q^(k - 1) * p + q^(k + m - 1) * p + q^(k + 2m - 1) * p + ...
 *   = (q^(k - 1) * p) / (1 - q^m) (無窮等比級數 = a1/(1 - r))
 * 輸入:
 * 2
 * 2 0.166666 1
 * 2 0.166666 2
 * 輸出:
 * 0.5455
 * 0.4545
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout.setf(ios::fixed);     // 非科學記號輸出
    cout.setf(ios::showpoint); // 顯示小數點
    cout.precision(4);         // 精度設為4位

    int cases, players, player;
    double total, each;
    
    cin >> cases;
    while (cases--) {
        cin >> players >> each >> player;
        total = (pow(1 - each, player - 1) * each) / (1 - pow(1 - each, players));
        cout << total << endl;
    }
    return 0;
}
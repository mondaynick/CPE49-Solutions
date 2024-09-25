/*
 * 10812 Beat the Spread!
 * 第一行輸入測資數，第二行開始分別輸入兩隊分數和以及兩隊分數差
 * 印出兩隊分數，先印大的再印小的，如果不合理則印出“impossible”
 * 輸入:
 * 2
 * 40 20
 * 20 40
 * 輸出:
 * 30 10
 * impossible
 */

#include <iostream>

using namespace std;

int main() {
    /* impossible conditions：
     * 1. sum < difference, sum < 0 or difference < 0
     * 2. (sum + difference) is odd number
     */
    int cases, sum, dif;
    cin >> cases;
    while(cases--) {
        cin >> sum >> dif;
        if (sum < dif || sum < 0 || dif < 0 || (sum + dif) % 2)
            cout << "impossible" << endl;
        else
            cout << (sum + dif) / 2 << " " << (sum - dif) / 2 << endl;
    }
    return 0;
}
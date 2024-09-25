/*
 * 10050 Hartals
 * 第一行輸入測資數，第二行輸入欲計算的天數，第三行輸入政黨個數，接下來幾行輸入各政黨的罷工週期，
 * 輸出在計算的天數內共有幾天是罷工，星期五和六不算工作日且第一天從星期天開始算
 * 輸入:
 * 2
 * 14
 * 3
 * 3
 * 4
 * 8
 * 100
 * 4
 * 12
 * 15
 * 25
 * 40
 * 輸出:
 * 5
 * 15
 */

#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases; // 測資數
    while (cases--) {
        int days;
        cin >> days; // 計算天數
        int partys;
        cin >> partys; // 政黨個數
        vector<int> periods;
        for (int i = 0 ; i < partys ; i++) {
            int period;
            cin >> period; // 罷工週期
            periods.push_back(period);
        }
        int count = 0;
        for (int i = 1 ; i <= days ; i++) {
            if ((i % 7) >= 1 && (i % 7) <= 5) { // 確認是否為工作日
                for (int j = 0 ; j < partys ; j++) {
                    if (i % periods[j] == 0) {
                        count++;
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
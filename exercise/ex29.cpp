/*
 * 11005 Cheapest Base
 * 先輸入測資數，再分別輸入印出0~9 A~Z的成本為何，再輸入有幾筆數字，最後輸入數字並輸出
 * 使用n進位印該筆資料所需成本最小的n為何，若有相同的數則必須全部印出來
 * 輸入:
 * 2
 * 10 8 12 13 15 13 13 16 9
 * 11 18 24 21 23 23 23 23 15
 * 17 33 21 23 27 26 27 19 4
 * 22 18 30 30 24 16 26 21 21
 * 5
 * 98329921
 * 12345
 * 800348
 * 14
 * 873645
 * 1 1 1 1 1 1 1 1 1
 * 1 1 1 1 1 1 1 1 1
 * 1 1 1 1 1 1 1 1 1
 * 1 1 1 1 1 1 1 1 1
 * 4
 * 0
 * 1
 * 10
 * 100
 * 輸出:
 * Case 1:
 * Cheapest base(s) for number 98329921: 24
 * Cheapest base(s) for number 12345: 13 31
 * Cheapest base(s) for number 800348: 31
 * Cheapest base(s) for number 14: 13
 * Cheapest base(s) for number 873645: 22
 * 
 * Case 2:
 * Cheapest base(s) for number 0: 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
 * 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36
 * Cheapest base(s) for number : 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
 * 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36
 * Cheapest base(s) for number : 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
 * 26 27 28 29 30 31 32 33 34 35 36
 * Cheapest base(s) for number : 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
 * 26 27 28 29 30 31 32 33 34 35 36
 */

#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases; // 輸入測資數
    for (int i = 1 ; i <= cases ; i++) {
        if (i != 1) cout << endl;
        cout << "Case " << i << ":" << endl;
        int cost[36];
        for (int i = 0 ; i < 4 ; i++) { // 輸入影印成本
            cin >> cost[9 * i]  >> cost[9 * i + 1] >> cost[9 * i + 2]
            >> cost[9 * i + 3]  >> cost[9 * i + 4] >> cost[9 * i + 5]
            >> cost[9 * i + 6]  >> cost[9 * i + 7] >> cost[9 * i + 8];
        }
        int subcases;
        cin >> subcases; // 輸入子測資數
        while (subcases--) {
            int input, temp, mincost = INT_MAX;
            cin >> input; // 輸入欲影印的資料
            cout << "Cheapest base(s) for number " << input << ":";
            vector<int> minbase;
            for (int b = 2 ; b <= 36 ; b++) {
                temp = input;
                int mintemp = 0;
                while (temp >= b) {
                    mintemp += cost[temp % b];
                    temp /= b;
                }
                mintemp += cost[temp];
                if (mintemp < mincost) {
                    mincost = mintemp;
                    minbase.clear();
                    minbase.push_back(b);
                } else if (mintemp == mincost) {
                    minbase.push_back(b);
                }
            }
            for (int len = 0 ; len < minbase.size() ; len++) {
                cout << " " << minbase[len];
            }
            cout << endl;
        }
    }
    return 0;
}
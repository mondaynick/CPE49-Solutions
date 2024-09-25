/*
 * 10783 Odd Sum
 * 第一行輸入測資數，接下來每兩行代表min和max，並計算出範圍內所有奇數和
 * 輸入:
 * 2
 * 1
 * 5
 * 3
 * 5
 * 輸出:
 * Case 1: 9
 * Case 2: 8
 */

#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int i = 1 ; i <= cases ; i++) {
        int min, max, sum = 0;
        cin >> min >> max;
        for (int j = min ; j <= max ; j++)
            if (j % 2)
                sum += j;
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
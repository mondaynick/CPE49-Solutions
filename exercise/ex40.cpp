/*
 * 10057 A mid-summer night's dream
 * 輸入測資數n及多筆資料X1, X2, ..., Xn，輸出A且滿足(|X1 - A| + |X2 - A| + ... + |Xn - A|)
 * 最小值、|Xi − A|為最小值的數量、可能有幾種最小值
 * 輸入:
 * 2
 * 10
 * 10
 * 4
 * 1
 * 2
 * 2
 * 4
 * 輸出:
 * 10 2 1
 * 2 2 1
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int cases;
    while (cin >> cases) {
        vector<int> container;
        int min, max, count = 0, possible;
        while (cases--) {
            int temp;
            cin >> temp;
            container.push_back(temp);
        }
        int len = container.size();
        //  排序
        sort(container.begin(), container.begin() + len);
        // 輸出中位數
        if (len % 2) {
            min = max = container[len / 2];
        } else {
            min = container[len / 2 - 1], max = container[len / 2];
        }
        cout << min;
        // 輸出|Xi − A|為最小值的數量
        for (int i = 0 ; i < len ; i++) {
            if (container[i] >= min && container[i] <= max) {
                count++;
            }
        }
        cout << " " << count << " ";
        // 可能有幾種最小值
        possible = max - min + 1;
        cout << possible << endl;
    }
    return 0;
}
/*
 * 11063 B2-Sequence
 * 輸入測資數及測資，判斷該數列是否為b2-sequence，必須從小輸入到大，且不會有任意兩數總和相同
 * 輸入:
 * 4
 * 1 2 4 8
 * 4
 * 3 7 10 14
 * 輸出:
 * Case #1: It is a B2-Sequence.
 * Case #2: It is no a B2-Sequence.
 */

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int cases, count = 1, inputnum; // 測資數 第幾筆測資 輸入值
    bool flag = true;               // 預設為b2-sequence
    while (cin >> cases) {
        vector <int> data;
        for (int i = 0 ; i < cases ; i++) {
            cin >> inputnum;
            if (i == 0) {
                data.push_back(inputnum);
            } else if (inputnum < data[i - 1]) {
                flag = false;
                break;
            } else {
                data.push_back(inputnum);
            }
        }
        if (!flag) {
            cout << "Case #" << count++ << ": It is not a B2-Sequence." << endl;
        } else {
            set <int> myset;
            for (int i = 0 ; i < data.size() - 1 ; i++) {
                for (int j = i + 1 ; j < data.size() ; j++) {
                    // set使用：insert用來插入, count用來確認是否存在
                    if (myset.count(inputnum = data[i] + data[j]) == 0) {
                        myset.insert(inputnum);
                    } else {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag) {
                cout << "Case #" << count++ << ": It is a B2-Sequence." << endl;
            } else {
                cout << "Case #" << count++ << ": It is not a B2-Sequence." << endl;
            }
        }
    }
    return 0;
}
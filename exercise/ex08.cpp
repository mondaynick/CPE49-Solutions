/*
 * 10008 What’s Cryptanalysis?
 * 統計字母，輸出為(字母, 字母數)，先依照字母數排序，再依照字母做排序
 * 輸入:
 * 3
 * This is a test.
 * Count me 1 2 3 4 5.
 * Wow!!!! Is this question easy?
 * 輸出:
 * S 7
 * T 6
 * I 5
 * E 4
 * O 3
 * A 2
 * H 2
 * N 2
 * U 2
 * W 2
 * C 1
 * M 1
 * Q 1
 * Y 1
 */

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    int cases, maxlen = 0; // 測資筆數和最大統計數目
    int count[100] = {0}; // 統計字母
    cin >> cases;
    cin.ignore(); // getline會吃掉\n，所以要清空緩衝區

    while (cases--) { // 遍歷文章
        string str;
        getline(cin, str);
        for (int i = 0 ; i < str.length() ; i++)
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
                maxlen = max(maxlen, ++count[toupper(str[i])]);
                // 用ASCII當作索引
    }

    for (int i = maxlen ; i > 0 ; i--) { // 依照字母數排序
        for (char j = 'A' ; j <= 'Z' ; j++) {
            if (count[j] == i)
                cout << j << " " << i << endl;
        }
    }

    return 0;
}
/*
 * 10252 Common Permutation
 * 輸出兩個單字相同的字母，並依照字母排序
 * 輸入:
 * pretty
 * women
 * walking
 * down
 * the
 * street
 * 輸出:
 * e
 * nw
 * et
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    while(cin >> s1 && cin >> s2) {
        int s1set[26] = {0}, s2set[26] = {0};
        for (int i = 0 ; i < s1.length(); i++) { // 遍歷s1
            s1set[s1[i] - 'a']++;
        }
        for (int i = 0 ; i < s2.length(); i++) { // 遍歷s2
            s2set[s2[i] - 'a']++;
        }
        for(int i = 0 ; i < 26 ; i++) { // 找出s1和s2中都有的字母
            if (s1set[i] > 0 && s2set[i] > 0)
                cout << (char)(i + 'a');
        }
        cout << endl;
    }
    return 0;
}
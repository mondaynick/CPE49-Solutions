/*
 * 10062 Tell me the frequencies!
 * 輸入一字串，輸出所有出現的文字頻率(ASCII, 次數)，先以頻率升冪，再以ascii升冪
 * 輸入:
 * AAABBC
 * 122333
 * 輸出:
 * 67 1
 * 66 2
 * 65 3
 * 
 * 49 1
 * 50 2
 * 51 3
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int cases = 0, max = 0;
    while (cin >> s) {
        if (!cases) {
            cases ++;
        } else {
            cout << endl;
        }
        int ascii[256] = {0};
        for (int i = 0 ; i < 256 ; i++) ascii[i] = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            ascii[s[i]]++;
            if (ascii[s[i]] > max) {
                max = ascii[s[i]];
            }
        }
        for (int i = 1 ; i <= max ; i++) {
            for (int j = 0 ; j <= 255 ; j++) {
                if (ascii[j] == i) {
                    cout << j << " " << i << endl;
                }
            }
        }
    }
    return 0;
}
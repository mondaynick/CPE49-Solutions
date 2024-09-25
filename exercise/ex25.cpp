/*
 * 10093 An Easy Problem!
 * 給定一數字，滿足該數為n進位且該數的所有位數總和可以被(n - 1)整除的最小n為何
 * 輸入:
 * 3
 * 5
 * A
 * 輸出:
 * 4
 * 6
 * 11
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    while (cin >> str) {
        int num, max = 1, val, i;
        for (int i = 0 ; i < str.length() ; i++) { // 計算位數總和
            if (str[i] == '+' || str[i] == '-') continue;
            else if (str[i] >= '0' && str[i] <= '9')
                num += val = str[i] - '0';
            else if (str[i] >= 'A' && str[i] <= 'Z')
                num += val = str[i] - 'A' + 10;
            else if (str[i] >= 'a' && str[i] <= 'z')
                num += val = str[i] - 'z' + 36;
            if (val > max) max = val; // 因為進制必須比所有數字都大1
        }
        for (i = max + 1 ; i <= 62 ; i++) {
            if (num % (i - 1) == 0) break;
        }
        if (i <= 62) cout << i << endl;
        else cout << "such number is impossible!" << endl;
    }
    return 0;
}
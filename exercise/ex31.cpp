/*
 * 10193 All You Need is Love
 * 找兩數最大公因數，若兩數互質則回傳Love is not all you need!，反之則回傳All you need is love!
 * 輸入:
 * 5
 * 11011
 * 11000
 * 11011
 * 11001
 * 111111
 * 100
 * 1000000000
 * 110
 * 1010
 * 100
 * 輸出:
 * Pair #1: All you need is love!
 * Pair #2: Love is not all you need!
 * Pair #3: Love is not all you need!
 * Pair #4: All you need is love!
 * Pair #5: All you need is love!
 */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int cases;
    cin >> cases;
    for (int i = 1 ; i <= cases ; i++) {
        string s1, s2;
        int ss1 = 0, ss2 = 0;
        cin >> s1;
        cin >> s2;
        for (int j = s1.length() - 1 ; j >= 0 ; j--) // 二進位轉十進位
            ss1 += pow(2, s1.length() - 1 - j) * (s1[j] - '0');
        for (int j = s2.length() - 1 ; j >= 0 ; j--)
            ss2 += pow(2, s2.length() - 1 - j) * (s2[j] - '0');
        int res = gcd(ss1, ss2); // 取最大公因數
        if (res > 1) // 判斷互質
            cout << "Pair #" << i << ": All you need is love!" << endl;
        else
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
    }
    return 0;
}
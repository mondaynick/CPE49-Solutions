/*
 * You can say 11
 * 輸入一個數字，最多可以輸入1000位，回傳該數是否可以被11整除，直到輸入為0
 * 輸入:
 * 112233
 * 30800
 * 2937
 * 323455693
 * 5038297
 * 112234
 * 0
 * 輸出:
 * 112233 is a multiple of 11.
 * 30800 is a multiple of 11.
 * 2937 is a multiple of 11.
 * 323455693 is a multiple of 11.
 * 5038297 is a multiple of 11.
 * 112234 is not a multiple of 11.
 */

/*
 * 解題策略：將奇數位與偶數位相加比較其絕對值相減是否可以被11整除
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    long int num[2] = {0, 0};

    while (cin >> s) {
        if (s == "0") break;
        num[0] = num[1] = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            num[i % 2] += s[i] - '0'; //將ASCII轉為十進位
        }
        if (abs(num[0] - num[1]) % 11 == 0) {
            cout << s << " is a multiple of 11." << endl;
        } else {
            cout << s << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}
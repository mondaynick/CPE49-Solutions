/*
 * 10019 Funny Encryption Method
 * 先輸入測資數，在輸入數字，將該數當作十進位數並轉成二進位數，計算共有幾個1為b1，
 * 然後將該數當作十六進位數並轉成二進位數，計算共有幾個1為b2，輸出b1 b2
 * 輸入:
 * 3
 * 265
 * 111
 * 1234
 * 輸出:
 * 3 5
 * 6 3
 * 5 5
 */

#include <iostream>

using namespace std;

int main() {
    int cases;
    while (cin >> cases) {
        while (cases--) {
            int b1 = 1, b2 = 0, input, temp;
            cin >> input;
            // 視為十進位並轉成二進位計算有幾個1
            temp = input;
            while (temp != 1) {
                if (temp % 2) b1++;
                temp /= 2;
            }
            // 視為十六進位並轉成二進位計算有幾個1
            temp = input;
            int hex1[] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2};
            while (temp / 10) {
                b2 += hex1[temp % 10];
                temp /= 10;
            }
            b2 += hex1[temp];
            // 輸出結果
            cout << b1 << " " << b2 << endl;
        }
    }
    return 0;
}
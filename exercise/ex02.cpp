/*
 * 10055 Hashmat the brave warrior
 * 分別輸入我方人數與敵方人數，回傳我方小於敵方多少人數，以EOF結尾
 * 輸入:
 * 10 12
 * 10 14
 * 100 200
 * 輸出:
 * 2
 * 4
 * 100
 */

/*
 * 解題策略：因為輸入的數字最大有2的32次方，宣告時記得使用long long int後輸出兩個輸入值的差
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    long long int self, enemy; // 測資不大於2^32

    while (cin >> self >> enemy) {
        cout << abs(self - enemy) << endl;
    }

    return 0;
}
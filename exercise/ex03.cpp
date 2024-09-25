/*
 * 10035 Primary Arithmetic
 * 輸入兩個整數，數字不超過10位，回傳兩個數字相加需要進位幾次，直到兩個數字皆為0結束
 * 輸入:
 * 123 456
 * 555 555
 * 123 594
 * 0 0
 * 輸出:
 * No carry operation.
 * 3 carry operation.
 * 1 carry operation.
 */

/*
 * 解題策略：迭代將兩個輸入取個位數後除以10來計算進位的次數
 */

#include <iostream>

using namespace std;

int main() {
    long num1, num2; // 測資輸入
    long carry, count; // 計算進位和次數

    // 當兩者皆為0才可以結束
    while ((cin >> num1 >> num2) && (num1 != 0 || num2 != 0)) {
        carry = count = 0;
        while (num1 != 0 || num2 != 0) {
            carry += num1 % 10 + num2 % 10;
            carry /= 10;
            num1 /= 10;
            num2 /= 10;
            if (carry != 0) count++;
        }
        if (count == 0) {
            cout << "No carry operation." << endl;
        } else if (count == 1) {
            cout << "1 carry operation." << endl;
        } else {
            cout << count << " carry operation." << endl;
        }
    }

    return 0;
}
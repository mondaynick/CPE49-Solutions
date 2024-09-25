/*
 * 948 Fibonaccimal Base
 * 輸入一數字，輸出該數字以費氏數列做基底
 * 輸入:
 * 10
 * 1
 * 2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 * 10
 * 輸出:
 * 1 = 1 (fib)
 * 2 = 10 (fib)
 * 3 = 100 (fib)
 * 4 = 101 (fib)
 * 5 = 1000 (fib)
 * 6 = 1001 (fib)
 * 7 = 1010 (fib)
 * 8 = 10000 (fib)
 * 9 = 10001 (fib)
 * 10 = 10010 (fib)
 */

#include <iostream>
#include <vector>

using namespace std;

// 17 =  1 0 0 1 0 1
//      13 8 5 3 2 1
int main() {
    int fib[40]; // 建置費氏數列
    fib[0] = 1, fib[1] = 2;
    for (int i = 2 ; i < 40 ; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    int cases, num, res;
    while (cin >> cases) {
        while (cases--) {
            cin >> num;
            res = num;
            vector <char> digit;
            for (int i = 39 ; i >= 0 ; i--) {
                if (num >= fib[i]) {
                    digit.push_back('1');
                    num -= fib[i];
                } else {
                    if (!digit.empty())
                        digit.push_back('0');
                }
            }
            cout << res << " = ";
            for (int i = 0 ; i < digit.size() ; i++)
                cout << digit[i];
            cout << " (fib)" << endl;
        }
    }
    return 0;
}
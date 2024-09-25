/*
 * 100 The 3n+ 1 problem
 * 給定兩數，回傳兩數之間所有數字中最大的maximum cycle length為何
 * 輸入:
 * 1 10
 * 100 200
 * 201 210
 * 900 1000
 * 輸出:
 * 1 10 20
 * 100 200 125
 * 201 210 89
 * 900 1000 174
 */

/*
 * 解題策略：迭代帶入公式比較最大值
 */

#include <iostream>

using namespace std;

int main() {
    int num1, num2, maxcycle, count;
    while (cin >> num1 >> num2) {
        cout << num1 << " " << num2 << " ";
        if (num2 < num1) { // 讓num1為最小值, num2為最大值
            num1 = num1 ^ num2;
            num2 = num1 ^ num2;
            num1 = num1 ^ num2;
        }
        maxcycle = 0;
        for (int i = num1 ; i <= num2 ; i++) { // 遍歷num1到num2
            count = 1;
            int ite = i;
            while (ite != 1) {
                if (ite % 2 == 0) { // 執行NP問題
                    ite = ite / 2;
                } else {
                    ite = 3 * ite + 1;
                }
                count++;
            }
            if (count > maxcycle) maxcycle = count;
        }
        cout << maxcycle << endl;
    }
    return 0;
}
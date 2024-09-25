/*
 * 11417 GCD
 * 輸入一數字，輸出
 * G <- 0
 * for i <- 1 to N - 1
 *     for j <- i + 1 to N
 *         G += GCD(i, j)
 * print(G)
 * 輸入:
 * 10
 * 100
 * 500
 * 0
 * 輸出:
 * 67
 * 13015
 * 442011
 */

#include <iostream>

using namespace std;

int GCD(int a, int b) {
    return (b == 0) ? a : GCD(b, a % b);
}

int main() {
    int N;
    while (cin >> N && N != 0) {
        int G = 0;
        for (int i = 1 ; i < N ; i++)
            for (int j = i + 1 ; j <= N ; j++)
                G += GCD(i, j);
        cout << G << endl;
    }
    return 0;
}
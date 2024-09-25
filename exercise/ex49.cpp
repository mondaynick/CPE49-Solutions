/*
 * 11321 Sort! Sort!! and Sort!!!
 * 給你兩個整數 N (0<N<=10000), M (0<M<=10000)，你要依照某些規則排序N個整數。
 * 先利用每個數字除以M的餘數由小到大排，若排序中比較的兩數為一奇一偶且兩數除以M的餘數相等，
 * 則奇數要排在偶數前面。若兩奇數除以M餘數大小相等，則原本數值較大的奇數排在前面。同樣的，
 * 若兩偶數除以M餘數大小相等，則較小的偶數排在前面。至於負數的餘數計算和 C 語言裡的定義相同，
 * 即負數的餘數絕對不會大於零。例如 -100 MOD 3 = -1, -100 MOD 4 = 0 依此類推
 * 輸入:
 * 15 3
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
 * 11
 * 12
 * 13
 * 14
 * 15
 * 0 0
 * 輸出:
 * 15 3
 * 15
 * 9
 * 3
 * 6
 * 12
 * 13
 * 7
 * 1
 * 4
 * 10
 * 11
 * 5
 * 2
 * 8
 * 14
 * 0 0
 */

#include <iostream>
#include <algorithm>

using namespace std;

int N, M, temp;

int isOdd(int num) {
    return abs(num % 2);
}

bool cmp(int a, int b) {
    if (a%M != b%M) return a%M < b%M;          // 餘數不同，小者前大者後
    if (isOdd(a) != isOdd(b)) return isOdd(a); // 餘數相同，奇數前偶數後
    if (isOdd(a)) return b < a;                // 皆為奇數，大奇前小奇後
    return a < b;                              // 皆為偶數，小偶前大偶後
}

int main() {
    while (cin >> N >> M && N != 0 && M != 0) {
        vector <int> container;
        for (int i = 0 ; i < N ; i++) {
            cin >> temp;
            container.push_back(temp);
        }
        sort(container.begin(), container.begin() + N, cmp);
        for (int i = 0 ; i < 15 ; i++) cout << container[i] << endl;
    }
    cout << "0 0" << endl;
    return 0;
}
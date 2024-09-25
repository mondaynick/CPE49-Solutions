/*
 * 10038 Jolly Jumpers
 * 如果n筆資料中，任兩數的絕對值差出現過1到n-1的所有數字，則該sequence為jolly
 * 輸入:
 * 4 1 4 2 3
 * 5 1 4 2 -1 6
 * 輸出:
 * Jolly
 * Not jolly
 */

#include <iostream>

using namespace std;

int main() {
    int cases, num;
    while (cin >> cases) {
        int check[3001] = {0};
        cin >> num;
        for (int i = 1 ; i < cases ; i++) {
            int prev = num;
            cin >> num;
            check[abs(num - prev)] = 1;
        }
        for(int i = 1 ; i <= cases ; i++) {
            if (i == cases)
                cout <<  "Jolly" << endl;
            else if (check[i] == 0) {
                cout << "Not jolly" << endl;
                break;
            }
        }
    }
    return 0;
}
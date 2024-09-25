/*
 * 299 Train Swapping
 * 輸入火車數及火車分別的車廂號，輸出要交換幾次才可以使火車車廂號碼由小排到大
 * 輸入:
 * 3
 * 3
 * 1 3 2
 * 4
 * 4 3 2 1
 * 2
 * 2 1
 * 輸出:
 * Optimal train swapping takes 1 swaps.
 * Optimal train swapping takes 6 swaps.
 * Optimal train swapping takes 1 swaps.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() { // 其解相當於問氣泡排序的次數
    int cases;
    cin >> cases;
    while (cases--) {
        int subcases, temp, count = 0;
        vector <int> container;
        cin >> subcases;
        for (int i = 0 ; i < subcases ; i++) {
            cin >> temp;
            container.push_back(temp);
        }
        for (int i = subcases - 1 ; i > 0 ; i--) {
            for (int j = 0 ; j < i ; j++) {
                if (container[j] > container[j + 1]) {
                    count++;
                    int temp = container[j];
                    container[j] = container[j + 1];
                    container[j + 1] = temp;
                }
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
    return 0;
}
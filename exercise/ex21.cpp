/*
 * 11349 Symmetric Matrix
 * 檢查是否為對稱矩陣，此題對稱矩陣定義為以中心來看上下左右包含對角是否對稱，
 * 輸入:
 * 2
 * N = 3
 * 5 1 3
 * 2 0 2
 * 3 1 5
 * N = 3
 * 5 1 3
 * 2 0 2
 * 0 1 5
 * 輸出:
 * Test #1: Symmetric.
 * Test #2: Non-symmetric.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() { // 解題技巧：可以使用一維陣列來解
    int cases, dim, num;
    vector <int> arr;
    char c;

    cin >> cases;
    for (int i = 1 ; i <= cases ; i++) {
        arr.clear();
        cin >> c >> c >> dim;
        dim *= dim;
        while (dim--) {
            cin >> num;
            arr.push_back(num);
        }
        for (int j = 0 ; j <= (int)((arr.size() - 1) / 2) ; j++) {
            if (j == (int)((arr.size() - 1) / 2))
                cout << "Test #" << i << ": Symmetric." << endl;
            else if (arr[j] != arr[arr.size() - j - 1]) {
                cout << "Test #" << i << ": Non-symmetric." << endl;
                break;
            }
        }
    }
    return 0;
}
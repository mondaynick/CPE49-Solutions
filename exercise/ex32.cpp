/*
 * 10190 Divide, But not Quite Conquer!
 * 輸入兩個整數分別為a和b，若a一直除以b到最後可以等於1，則輸出所有的數字，否則輸出Boring!
 * 輸入:
 * 125 5
 * 30 3
 * 80 2
 * 81 3
 * 輸出:
 * 125 25 5 1
 * Boring!
 * Boring!
 * 81 27 9 3 1
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        vector <int> container;
        container.push_back(a);
        while (1) {
            if (a % b == 0) {
                a /= b;
                container.push_back(a);
            } else if (a == 1) {
                cout << container[0];
                for (int i = 1 ; i < container.size() ; i++)
                    cout << " " << container[i];
                cout << endl;
                break;
            } else {
                cout << "Boring!" << endl;
                break;
            }
        }
    }
    return 0;
}
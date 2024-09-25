/*
 * 10931 Parity
 * 輸入一數字，輸出該數字的二進位和含有多少的1，直到輸出為0
 * 輸入:
 * 1
 * 2
 * 10
 * 21
 * 0
 * 輸出:
 * The parity of 1 is 1 (mod2).
 * The parity of 10 is 1 (mod2).
 * The parity of 1010 is 2 (mod2).
 * The parity of 10101 is 3 (mod2).
 */

#include <iostream>

using namespace std;

int main() {
    int num;
    while (cin >> num && num != 0) {
        vector <char> bit;
        bit.push_back('1');
        int count = 1;
        while (num != 1) {
            if (num % 2) {
                bit.push_back('1');
                count++;
            } else {
                bit.push_back('0');
            }
            num /= 2;
        }
        cout << "The parity of ";
        for (int i = 0 ; i < bit.size() ; i++) cout << bit[i];
        cout << " is " << count << " (mod 2)." << endl;
    }
    return 0;
}
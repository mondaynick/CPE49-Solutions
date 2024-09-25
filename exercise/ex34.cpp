/*
 * 10922 2 the 9s
 * 
 * 輸入:
 * 999999999999999999999
 * 9
 * 9999999999999999999999999999998
 * 0
 * 輸出:
 * 999999999999999999999 is a multiple of 9 and has 9-degree 3.
 * 9 is a multiple of 9 and has 9-degree 1.
 * 9999999999999999999999999999998 is not a multiple of 9.
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string num;
    while (cin >> num && num != "0") {
        string temp = num;
        int count, step = 0;
        while (1) {
            step++;
            int count = 0;
            for (int i = 0 ; i < temp.length() ; i++) {
                count += temp[i] - '0';
            }
            if (count % 9 != 0) {
                cout << num << " is not a multiple of 9." << endl;
                break;
            } else if (count < 10) {
                cout << num << " is a multiple of 9 and has 9-degree " << step << "." << endl;
                break;
            } else {
                stringstream SS;
                SS << count;
                SS >> temp;
            }
        }
    }
    return 0;
}
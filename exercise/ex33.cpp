/*
 * Simply Emirp
 * 輸入一個數字N，若該數不為prime則輸出N is not prime.
 * 若該數為prime但不為emirp則輸出N is prime.
 * 若該數為prime且emirp則輸出N is emirp.
 * 輸入:
 * 17
 * 18
 * 19
 * 179
 * 199
 * 輸出:
 * 17 is emirp.
 * 18 is not prime.
 * 19 is prime.
 * 170 is emirp.
 * 199 is emirp.
 */

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int val) {
    for (int i = 2 ; i <= sqrt(val) ; i++)
        if (val % i == 0) return false;
    return true;
}

int main() {
    int num;
    while (cin >> num) {
        int revnum = 0, temp = num;
        while (temp % 10) { // 數字反轉
            revnum = revnum * 10 + temp % 10;
            temp /= 10;
        }
        if (!isPrime(num)) {
            cout << num << " is not prime." << endl;
        } else if (isPrime(num) && isPrime(revnum) && num != revnum) {
            cout << num << " is emirp." << endl;
        } else {
            cout << num << " is prime." << endl;
        }
    }
    return 0;
}
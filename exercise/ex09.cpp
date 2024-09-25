/*
 * 10222 Decode the Mad man
 * 依照鍵盤位置，輸出的字元為輸入的字元的左邊兩格
 * 輸入:
 * k[r dyt I[o
 * 輸出:
 * how are you
 */

#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int main()
{
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string inputstr;
	
    while (cin >> inputstr) {
        for (int i = 0 ; i < inputstr.length(); i++) {
            cout << keyboard[keyboard.find(tolower(inputstr[i])) - 2];
        }
        cout << endl;
    }
    return 0;
}
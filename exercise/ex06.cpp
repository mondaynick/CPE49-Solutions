/*
 * 10101 Bangla Numbers
 * 將數字轉為孟加拉數，其中kuti(10000000), lakh(100000), hajar(1000), shata(100)
 * 輸入:
 * 23764
 * 45897458973958
 * 輸出:
 * 1. 23 hajar 7 shata 64
 * 2. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
 */

/*
 * 解題策略：使用遞迴，如果該數可以除以該基數，則遞迴以除以該數作引數、印出該單位、除以基數取餘數
 */

#include <iostream>

using namespace std;

void numberHandler(long long int num) {
    if (num / 10000000) {
        numberHandler(num / 10000000);
        cout << " kuti";
        num %= 10000000;
    }
    if (num / 100000) {
        numberHandler(num / 100000);
        cout << " lakh";
        num %= 100000;
    }
    if (num / 1000) {
        numberHandler(num / 1000);
        cout << " hajar";
        num %= 1000;
    }
    if (num / 100) {
        numberHandler(num / 100);
        cout << " shata";
        num %= 100;
    }
    if (num) {
        cout << " " << num;
    }
}

int main() {
    long long int num; // 輸入的數字
    int cases = 1;     // 第幾筆測資
    while (cin >> num) {
        cout.setf(ios::right);
        cout.width(4);
        cout << cases << ".";
        if (num) 
            numberHandler(num);
        else
            cout << " 0";
        cout << endl;
        cases++;
    }
    return 0;
}
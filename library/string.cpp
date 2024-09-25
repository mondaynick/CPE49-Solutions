#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    /* 基本輸入 */
    string s;
    cin >> s;           // 輸入字串不可含空白
    cin.ignore();       // 因為getline會吃掉\n，所以cin接getline要加這行
    getline(cin, s);    // 輸入字串可以含空白

    /* 將ASCII轉成十進位 */
    int dec;
    char lower = 'a', upper = 'A', number = '5';
    dec = lower - 'a';
    dec = upper - 'A';
    dec = number - '0';

    /* 數字轉字串 */
    stringstream SS;
    int num_input;
    string txt_output;
    SS << num_input;
    SS >> txt_output;
    return 0;
}
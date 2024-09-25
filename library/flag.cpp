#include <iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);      // 以正常方式顯示，而非科學記號
    cout.setf(ios::dec);        // 以10進位顯示
    cout.setf(ios::hex);        // 以8進位顯示
    cout.setf(ios::oct);        // 以16進位顯示
    cout.setf(ios::scientific); // 以科學記號顯示
    cout.setf(ios::showpoint);  // 顯示小數點
    cout.setf(ios::left);       // 靠左對齊
    cout.setf(ios::right);      // 靠右對齊
    cout.precision(4);          // 將浮點數精確度設定為4位
    cout.width(4);              // 設定輸出資料的欄位寬度
    return 0;
}
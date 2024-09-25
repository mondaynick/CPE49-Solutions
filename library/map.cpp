#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map <int, string> dictionary; // 宣告一個int map string型別的dictionary

    dictionary[710822] = "Monday Nick"; // set鍵值

    string s = dictionary[710822]; // get鍵值

    for (map <int, string>::iterator it = dictionary.begin() ; it != dictionary.end() ; it++)
        cout << it -> first << " " << it -> second << endl; // 迴圈遍歷
    // 註：map會以key來排序

    map <int, string>::iterator ite = dictionary.find(710833);
    if (ite != dictionary.end()) // 可以使用find搭配end來判斷key值是否存在
        cout << ite -> second << endl;

    dictionary.clear(); // 清空dictionary

    return 0;
}
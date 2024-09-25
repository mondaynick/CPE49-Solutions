/*
 * 272 TEX Quotes
 * 將開頭的括號換成``，將結尾的括號換成''
 * 輸入:
 * "To be or not to be," quoth the Bard, "that
 * is the question".
 * The programming contestant replied: "I must disagree.
 * To `C' or not to `C', that is The Question!"
 * 輸出:
 * ``To be or not to be,'' quoth the Bard, ``that
 * is the question''.
 * The programming contestant replied: ``I must disagree.
 * To `C' or not to `C', that is The Question!''
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    bool flag = 0; // 記錄現在是括號開頭還是括號結束
    while (getline(cin, s)) {
        for (int i = 0 ; i < s.length() ; i++) {
            if (s[i] == '"') {
                if (flag) {
                    cout << "''";
                } else {
                    cout << "``";
                }
                flag = !flag;
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
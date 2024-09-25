/*
 * 10415 Eb Alto Saxphone Player
 * 輸入用薩克斯風吹了哪些音，輸出哪些按鈕按了幾次(記得，按鈕按下去沒放開而維持按下則只算一次)
 * 輸入:
 * 3
 * cdefgab
 * BAGFEDC
 * CbCaDCbCbCCbCbabCCbCbabae
 * 輸出:
 * 0 1 1 1 0 0 1 1 1 1
 * 1 1 1 1 0 0 1 1 1 0
 * 1 8 10 2 0 0 2 2 1 0
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet[256];
    alphabet['c'] = "0111001111";
    alphabet['d'] = "0111001110";
    alphabet['e'] = "0111001100";
    alphabet['f'] = "0111001000";
    alphabet['g'] = "0111000000";
    alphabet['a'] = "0110000000";
    alphabet['b'] = "0100000000";
    alphabet['C'] = "0010000000";
    alphabet['D'] = "1111001110";
    alphabet['E'] = "1111001100";
    alphabet['F'] = "1111001000";
    alphabet['G'] = "1111000000";
    alphabet['A'] = "1110000000";
    alphabet['B'] = "1100000000";

    int cases;
    string s;
    cin >> cases;
    while (cases--) {
        int count[10], temp[10];
        for (int i = 0 ; i < 10 ; i++) count[i] = temp[i] = 0;
        cin >> s;
        for (int len = 0 ; len < s.length() ; len++) {
            for (int index = 0 ; index < 10 ; index++) {
                if (alphabet[s[len]][index] == '1' && temp[index] == 0) { // 原本沒按下
                    count[index]++;
                    temp[index] = 1;
                } else if (alphabet[s[len]][index] == '0') {
                    temp[index] = 0;
                }
            }
        }
        for (int i = 0 ; i < 10 ; i++) {
            if (i > 0) cout << " ";
            cout << count[i];
        }
        cout << endl;
    }

    return 0;
}
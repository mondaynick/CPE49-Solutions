/*
 * 10409 Die Game
 * 輸入子測資數及分別往哪一面作翻轉，預設頂端為1，北面為2，西面為3
 * 輸入:
 * 1
 * north
 * 3
 * north
 * east
 * south
 * 0
 * 輸出:
 * 5
 * 1
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int cases, temp;
    string s;
    while (cin >> cases && cases != 0) {
        int top = 1, north = 2, west = 3, bottom = 6, south = 5, east = 4;
        for (int i = 0 ; i < cases ; i++) {
            cin >> s;
            // 東西面翻轉代表南北面不變，南北面翻轉代表東西面不變
            if (s == "east") {
                // top <- west <- bottom <- east <- top
                temp = top; top = west; west = bottom; bottom = east; east = temp;
            } else if (s == "west") {
                // top <- east <- bottom <- west <- top
                temp = top; top = east; east = bottom; bottom = west; west = temp;
            } else if (s == "south") {
                // top <- north <- bottom <- south <- top
                temp = top; top = north; north = bottom; bottom = south; south = temp;
            } else if (s == "north") {
                // top <- south <- bottom <- north <- top
                temp = top; top = south; south = bottom; bottom = north; north = temp;
            }
        }
        cout << top << endl;
    }
    return 0;
}
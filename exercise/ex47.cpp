/*
 * 118 Mutant Flatworld Explorers
 * 首先輸入右上角的座標(x, y)，在分別輸入機器人的起始點(x, y)與面朝方向，分別輸出機器人的終點(x, y)
 * 與面朝方向，假設左下角(0, 0)為起點，且(x, y) => (x, y + 1)是為朝北方前進
 * 輸入:
 * 5 3
 * 1 1 E
 * RFRFRFRF
 * 3 2 N
 * FRRFLLFFRRFLL
 * 0 3 W
 * LLFFFLFLFL
 * 輸出:
 * 1 1 E
 * 3 3 N LOST
 * 2 3 S
 */

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int xlimit, ylimit, xbegin, ybegin;
    string s;
    vector <string> miss;
    char toward;
    cin >> xlimit >> ylimit;
    while (cin >> xbegin >> ybegin >> toward) {
        cin >> s;
        bool failed = false;
        for (int i = 0 ; i <= s.length() ; i++) {
            if (i == s.length() && !failed) {
                cout << xbegin << " " << ybegin << " " << toward << endl;
            } else if (!failed) {
                if (s[i] == 'F') {
                    int xtemp = xbegin, ytemp = ybegin;
                    if (toward == 'E') {
                        xtemp = xbegin + 1;
                    } else if (toward == 'W') {
                        xtemp = xbegin - 1;
                    } else if (toward == 'S') {
                        ytemp = ybegin - 1;
                    } else if (toward == 'N') {
                        ytemp = ybegin + 1;
                    }
                    if (xtemp < 0 || xtemp > xlimit || ytemp < 0 || ytemp > ylimit) {
                        string errorMsg = to_string(xbegin) + " " + to_string(ybegin) + " " + to_string(toward);
                        int misslen = miss.size();
                        for (int len = 0 ; len <= misslen ; len++) {
                            if (len == misslen) {
                                failed = true;
                                miss.push_back(errorMsg);
                            } else if (miss[len] == errorMsg) {
                                break;
                            }
                        }
                    } else {
                        xbegin = xtemp, ybegin = ytemp;
                    }
                } else {
                    char direct[] = {'E', 'S', 'W', 'N'};
                    int index = 0;
                    for (int j = 0 ; j < 4 ; j++)
                        if (toward == direct[j]) {
                            index = j;
                        }
                    if (s[i] == 'L') {
                        toward = direct[(index + 3) % 4];
                    } else if (s[i] == 'R') {
                        toward = direct[(index + 5) % 4];
                    }
                }
            } else {
                cout << xbegin << " " << ybegin << " " << toward << " LOST" << endl;
                break;
            }
        }
    }
    return 0;
}
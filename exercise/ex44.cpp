/*
 * 100189 Minesweeper
 * 輸入列數、行數與分佈圖，輸出每個點周圍的地雷數(若是地雷就直接輸出地雷)
 * 輸入:
 * 4 4
 * *...
 * ....
 * .*..
 * ....
 * 3 5
 * **...
 * .....
 * .*...
 * 0 0
 * 輸出:
 * Field #1:
 * *100
 * 2210
 * 1*10
 * 1110
 * Field #2:
 * **100
 * 33200
 * 1*100
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int rows, cols, cases = 0;
    string s;
    while (cin >> rows >> cols && rows != 0 && cols != 0) {
        vector <char> mine;
        for (int i = 0 ; i < rows ; i++) { // 輸入分佈圖
            cin >> s;
            for (int j = 0 ; j < cols ; j++)
                mine.push_back(s[j]);
        }
        cout << "Field #" << ++cases << ":" << endl;
        for (int i = 0 ; i < rows ; i++) {
            for (int j = 0 ; j < cols ; j++) {
                if (mine[cols * i + j] == '*') { // 如果是地雷就輸出地雷
                    cout << '*';
                } else { // 否則
                    int top    = (i == 0) ? 0 : i - 1;
                    int bottom = (i == rows - 1) ? rows - 1 : i + 1;
                    int left   = (j == 0) ? 0 : j - 1;
                    int right  = (j == cols - 1) ? cols - 1 : j + 1;
                    int count = 0; // 地雷數量
                    for (int row = top ; row <= bottom ; row++) {
                        for (int col = left ; col <= right ; col++) {
                            if (mine[cols * row + col] == '*') count++;
                        }
                    }
                    cout << count;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
/*
 * 10908 Largest Square
 * 輸入測資數，列數，行數，中心點數量，維度資料，分別給定中心點位置
 * 輸出列數，行數，中心點數量，分別輸出該正方形大小
 * 輸入:
 * 1
 * 7 10 4
 * abbaaaaaa
 * abbaaaaaa
 * abbbaaaaa
 * aaaaaaaaa
 * aaccaaaaa
 * aaccaaaaa
 * 輸出:
 * 7 10 4
 * 3
 * 1
 * 5
 * 1
 */

#include <iostream>

using namespace std;

bool isSquare(char **dim, int row, int col, int spread, int rowlimit, int collimit) {
    int top    = row - spread;
    int bottom = row + spread;
    int left   = col - spread;
    int right  = col + spread;
    if (top < 0 || bottom >= rowlimit || left < 0 || right >= collimit) return false;
    char midch = dim[row][col];
    for (int i = top ; i <= bottom ; i++) {
        for (int j = left ; j <= right ; j++) {
            if (midch != dim[i][j])
                return false;
        }
    }
    return true;
}

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int rows, cols, midnum, temp;
        cin >> rows >> cols >> midnum;
        char **dim = new char* [rows];
        for (int i = 0 ; i < rows ; i++) {
            dim[i] = new char [cols];
        } 
        for (int i = 0 ; i < rows ; i++) { // 放置二維資料
            for (int j = 0 ; j < cols ; j++) {
                cin >> dim[i][j];
            }
        }
        cout << rows << " " << cols << " " << midnum << endl;
        while (midnum--) { // 計算大小
            int row, col, spread = 1;
            cin >> row >> col;
            while (1) {
                if (!isSquare(dim, row, col, spread, rows, cols)) {
                    int radius = 2 * spread - 1;
                    cout << radius << endl;
                    break;
                } else {
                    spread++;
                }
            }
        }
    }
    return 0;
}
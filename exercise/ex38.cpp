/*
 * 10642 Can You Solve It
 * 走法為(0, 0) -> (0, 1) -> (1, 1) -> (0, 2) -> (1, 2) - > (2, 2) -> ...
 * 首先輸入測資數，接著輸入起點與終點，輸出共要走幾步
 * 輸入:
 * 3
 * 0 0 0 1
 * 0 0 1 0
 * 0 0 0 2
 * 輸出:
 * Case 1: 1
 * Case 2: 2
 * Case 3: 3
 */

#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1 ; i <= cases ; i++) {
        int rowBegin, colBegin, rowEnd, colEnd, step = 0;
        cin >> rowBegin >> colBegin >> rowEnd >> colEnd;
        int startline = (rowBegin + colBegin), endline = (rowEnd + colEnd);
        step += (endline - startline) * (endline + startline + 1) / 2;
        step += (rowEnd - rowBegin);
        cout << "Case " << i << ": " << step << endl;
    }
    return 0;
}
/*
 * 10268 498-bis
 * ans = a0*n*x^(n-1) + a1*(n-1)*x^(n-2) + a2*(n-2)*x^(n-3) + ...
 * 第一行輸入x，第二行輸入a0, a1, ..., an
 * 輸入:
 * 7
 * 1 -1
 * 2
 * 1 1 1
 * 輸出:
 * 1
 * 5
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    long long int x, a;
    char eof;

    while(cin >> x) {
        vector <long long int> cof;
        long long int ans = 0;

        while(cin >> a) {
            cof.push_back(a);
            cin.get(eof);
            if (eof == '\n') break;
        }
        long long int len = cof.size();

        for (int i = 0 ; i < cof.size() ; i++)
            ans += cof[i] * (len - i - 1) * (pow(x, len - i - 2));

        cout << ans << endl;
    }
    return 0;
}
/*
 * 490 Rotating Sentences
 * 輸入多筆字串，輸出將字串做90度翻轉後的結果
 * 輸入:
 * Rene Decartes once said,
 * "I think, therefore I am."
 * 輸出:
 * "R
 * Ie
 *  n
 * te
 * h
 * iD
 * ne
 * kc
 * ,a
 *  r
 * tt
 * he
 * es
 * r
 * eo
 * fn
 * oc
 * re
 * e
 *  s
 * Ia
 *  i
 * ad
 * m,
 * .
 * "
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str[101];
    int count = 0, maxlen = 0, maxindex = 0;
    while (getline(cin, str[count])) {
        if (str[count].length() > maxlen) {
            maxlen = str[count].length();
            maxindex = count;
        }
        count++;
    }
    for (int i = 0 ; i < maxlen ; i++, cout << endl) {
        for (int j = count - 1 ; j >= 0 ; j--) {
            if (i < maxindex)
                cout << " ";
            else if (i < str[i].length())
                cout << str[j][i];
                
        }
    }
}
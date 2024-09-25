/*
 * 10420 List of Conquests
 * 輸入為幾個愛人，國家名、姓名，統計愛人人數後，先印國家在印人數，國家必須依照字母排序
 * 輸入:
 * 3
 * Spain Donna Elvira
 * England Jane Doe
 * Spain Donna Anna
 * 輸出:
 * England 1
 * Spain 2
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string countryName[2000], filter; // 2000個國家名稱和過濾姓名
    int cases, count = 1; // 測資數和國家統計數

    cin >> cases;
    for (int i = 0 ; i < cases ; i++) {
        cin >> countryName[i];
        getline(cin, filter); // 過濾後面的姓名
    }

    sort(countryName, countryName + cases); //  排序國家

    for (int i = 0, curr = 0 ; i < cases ; i++) {
        if (i == 0) {
            cout << countryName[i] << " ";
        } else if (countryName[i] != countryName[curr]) { // 當遍歷到不同的國家
            curr = i;
            cout << count << endl;
            count = 1;
            cout << countryName[curr] << " ";
        } else {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
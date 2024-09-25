/*
 * 12019 Doom’s Day Algorithm
 * 輸入n筆日期，輸出該日為星期幾，已知2011年1月1日是星期六
 * 輸入:
 * 8
 * 1 6
 * 2 28
 * 4 5
 * 5 26
 * 8 1
 * 11 1
 * 12 25
 * 12 31
 * 輸出:
 * Thursday
 * Monday
 * Tuesday
 * Thursday
 * Monday
 * Tuesday
 * Sunday
 * Saturday
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string weekday[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cases, month, day;
    cin >> cases;
    while (cases--) {
        int base = 4;
        cin >> month >> day;
        for (int i = 1 ; i < month ; i++)
            base += days[i];
        base += day;
        cout << weekday[base % 7] << endl;
    }
    return 0;
}
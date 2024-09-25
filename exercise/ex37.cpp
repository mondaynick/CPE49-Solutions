/*
 * 10221 Satellites
 * 若地球的半徑為6440公里，輸入衛星距離地表高度，及衛星已地球中心旋轉幾度或幾分(1度 = 60分)，
 * 輸出其弧長(pi * radius * deg / 180)即弦長(2 * radius * sin(degree / 2))
 * 輸入:
 * 500 30 deg
 * 700 60 min
 * 200 45 deg
 * 輸出:
 * 3633.775503 3592.408346
 * 124.616509 124.614927
 * 5215.043805 5082.035982
 */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    double pi = 2 * acos(0); // acos0 = pi / 2
    double height, deg;
    string unit;

    while (cin >> height >> deg >> unit) {
        double degree = (unit == "min") ? (deg / 60) : deg;
        double radius = height + 6440.0;
        if (degree > 180) degree = 360 - degree;
        double ang = degree * pi / 180.0;
        // 計算弧長
        double arc = pi * radius * degree / 180.0;
        // 計算弦長
        double chord = 2 * radius * sin(ang / 2.0);
        // 輸出結果
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(6);
        cout << arc << " " << chord << endl;
    }

    cout << pi << endl;
    return 0;
}
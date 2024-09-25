#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return abs(a - 4) < abs(b - 4);
}

int main() {
    // sort用來排序，範圍包含開頭不含結尾，且自定義函式可寫可不寫
    vector <int> container = {1, 6, 2, 4, 3};
    sort(container.begin(), container.begin() + container.size(), cmp);
    for (vector <int>::iterator ite = container.begin() ; ite != container.end() ; ite++)
        cout << " " << *ite; // 4, 3, 6, 2, 1
    cout << endl;

    // swap用來交換兩個數字
    int a = 5, b = 3;
    swap(a, b);
    cout << a << " " << b << endl; // 3 5

    // reverse用來反轉陣列或串列
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr, arr + 6); // 6 5 4 3 2 1 7 8 9 10
    vector <int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr2.begin(), arr2.begin() + 6); // 6 5 4 3 2 1 7 8 9 10

    // lower_bound回傳[begin, end)中大於等於val值的第一個位置位址
    // upper_bound回傳[begin, end)中大於val值的第一個位置位址
    vector <int> seq = {1, 2, 4, 5, 7, 9, 11};
    vector <int>::iterator lower = lower_bound(seq.begin(), seq.end(), 5);
    cout << distance(seq.begin(), lower) << endl; // 3
    vector <int>::iterator upper = upper_bound(seq.begin(), seq.end(), 5);
    cout << distance(seq.begin(), upper) << endl; // 4

    return 0;
}
#include <iostream>
#include <set>

using namespace std;

int main() {
    set <int> myset; // 宣告一個int型別的set

    myset.insert(5); // 插入元素5至集合中

    for (set <int>::iterator it = myset.begin() ; it != myset.end() ; it++)
        cout << *it << endl; // 遍歷集合

    myset.count(5); // 判斷元素5是否存在於集合中，若存在則回傳1

    myset.erase(5); // 刪除元素5從集合中，並且回傳是否刪除成功

    myset.clear(); // 清空集合

    return 0;
}
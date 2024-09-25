#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> container; // 宣告int型別的vector
    vector <int> temp = {1, 2, 3, 4, 5};
    vector <int> temp2(temp.begin() + 2, temp.end() - 1); // [3, 4]

    int val = container[0]; // 取得元素

    container.push_back(1); // 將1放進container的尾端
    container.pop_back();   // 移除尾端元素

    for (vector <int>::iterator it = container.begin() ; it != container.end() ; it++)
        cout << *it << endl; // 正向陣列遍歷
    
    for (vector <int>::reverse_iterator it = container.rbegin() ; it != container.rend() ; it++)
        cout << *it << endl; // 反向陣列遍歷

    int currentSize = container.size();       // 取得container的目前使用大小
    int allocatedSize = container.capacity(); // 取得container的預先配置大小

    container.clear(); // 清空container
    
    return 0;
}
/*
 * 10041 Vito’s family
 * 給定m筆測資數，n筆街道，回傳位於哪個街道到所有街道最近
 * 輸入:
 * 2
 * 2 2 4
 * 3 2 4 6
 * 輸出:
 * 2
 * 4
 */

/*
 * 解題策略：將資料排序好取中位數
 */

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int street[30000], caseNum, subNum, distance;

    cin >> caseNum; // 輸入測資數
    for(int i = 0 ; i < 30000 ; i++) street[i] = 0;
    for(int i = 0 ; i < caseNum ; i++) { // 遍歷測資
        cin >> subNum; // 輸入子測資數
        for (int j = 0 ; j < subNum ; j++) // 遍歷子測資
            cin >> street[j];
        sort(street, street + subNum); // sort含頭不含尾
        int house = street[subNum / 2]; // 取中位數
        distance = 0;
        for (int k = 0 ; k < subNum ; k++) distance += abs(street[k] - house);
        cout << distance << endl;
    }
    return 0;
}
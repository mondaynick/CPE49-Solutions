/*
 * 10226 Hardwood Species
 * 輸入測資數及輸入大量資料，輸出各種資料佔整體的百分比
 * 輸入:
 * 1
 * 
 * Red Alder
 * Ash
 * Aspen
 * Basswood
 * Ash
 * Beech
 * Yellow Birch
 * Ash
 * Cherry
 * Cottonwood
 * Ash
 * Cypress
 * Red Elm
 * Gum
 * Hackberry
 * White Oak
 * Hickory
 * Pecan
 * Hard Maple
 * White Oak
 * Soft Maple
 * Red Oak
 * Red Oak
 * White Oak
 * Poplan
 * Sassafras
 * Sycamore
 * Black Walnut
 * Willow
 * 輸出:
 * Ash 13.7931
 * Aspen 3.4483
 * Basswood 3.4483
 * Beech 3.4483
 * Black Walnut 3.4483
 * Cherry 3.4483
 * Cottonwood 3.4483
 * Cypress 3.4483
 * Gum 3.4483
 * Hackberry 3.4483
 * Hard Maple 3.4483
 * Hickory 3.4483
 * Pecan 3.4483
 * Poplan 3.4483
 * Red Alder 3.4483
 * Red Elm 3.4483
 * Red Oak 6.8966
 * Sassafras 3.4483
 * Soft Maple 3.4483
 * Sycamore 3.4483
 * White Oak 10.3448
 * Willow 3.4483
 * Yellow Birch 3.4483
 */

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s;
    int cases;
    cin >> cases;
    getline(cin, s);
    cin.ignore();
    for (int i = 0 ; i < cases ; i++) {
        int count = 0;
        map <string, int> treeMap; // 因為map以key來排序
        while (getline(cin, s) && (s != "")) {
            treeMap[s]++;
            count++;
        }

        if (i > 0) cout << endl;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(4);
        for (map <string, int>::iterator iter = treeMap.begin() ; iter != treeMap.end() ; iter++) {
            cout << iter->first << " " << ((double) iter->second / count) * 100 << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

//problem 1

    set<int> s1 = { 1, 2, 2, 3, 3, 4, 5 };
    cout<<"Number of unique elements: "<<s1.size()<<endl;
    map<int, int> m1;
    int arr[] = {1,2,2,3,3,4,5};
    for(int i : arr) m1[i] = i;
    cout << "Number of unique elements: " << m1.size() << endl;
    return 0;

//problem 2

    vector<int> list1 = {1, 2, 3, 3, 4, 5};
    vector<int> list2 = {4, 5, 6, 7, 8};
    map<int, bool> map1, map2;
    for (int num : list1) map1[num] = true;
    for (int num : list2) map2[num] = true;
    map<int, bool> union_map, intersection_map;
    for (auto& [key, value] : map1) union_map[key] = true;
    for (auto& [key, value] : map2) union_map[key] = true;
    for (auto& [key, value] : map1) if (map2.find(key) != map2.end()) intersection_map[key] = true;
    cout << "Union: ";
    for (auto& [key, value] : union_map) cout << key << " ";
    cout << "\nIntersection: ";
    for (auto& [key, value] : intersection_map) cout << key << " ";
    cout << endl;
    return 0;

//problem 3

    vector<vector<int>> lists = {{1, 2, 3}, {2, 6, 5}, {2, 7}};
    map<int, int> count_map;
    int num_lists = lists.size();
    for (const auto& list : lists) {
        for (int num : list) {
            count_map[num]++;
        }
    }
    cout << "Common values: ";
    for (const auto& [key, count] : count_map) {
        if (count == num_lists) {
            cout << key << " ";
        }
    }
    cout << endl;
    return 0;
}

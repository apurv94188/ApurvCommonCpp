/*
This code will sortout your confusion with following usage of set, map, unordered_set, unordered_map, vector, string

1. lower_bound
2. upper_bound
3. find
4. insert
5. {} initializatiion
6. clear
7. sort
8. erase
9. Modification at index
10. custom sort

*/

#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    map<int,int> m = {{3,4},{5,4},{8,9},{93,2}};
    
    auto find_map = m.find(8);
    cout << find_map->first << ":" << find_map->second << " ";
    
    map<int,int>::iterator itr_find_map = m.find(93);
    cout << itr_find_map->first << ":" << itr_find_map->second << " ";
    
    auto lower_bound_map = m.lower_bound(8);
    cout << lower_bound_map->first << ":" << lower_bound_map->second << " ";
    return 0;
}


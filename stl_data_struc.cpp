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
11. iterate over the data structure

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
    cout << "Map" << endl;
    map<int,int> m = {{3,4},{5,4},{8,9},{93,2}};
    
    auto find_map = m.find(8);
    cout << find_map->first << ":" << find_map->second << " ";
    
    map<int,int>::iterator itr_find_map = m.find(90);
    cout << itr_find_map->first << ":" << itr_find_map->second << " ";
    
    cout << 8 << ":" << m[8] << " ";
    
    
    auto lower_bound_map = m.lower_bound(7);
    cout << lower_bound_map->first << ":" << lower_bound_map->second << " ";
    
    
    //*** unordered_map
    cout << "\n\n" <<"Unordered Map"<< endl;
    unordered_map<int,int> um = {{3,4},{5,4},{8,9},{93,2}};
    
    auto find_unmap = um.find(8);
    cout << find_unmap->first << ":" << find_unmap->second << " ";
    
    unordered_map<int,int>::iterator itr_find_unmap = um.find(93);
    cout << itr_find_unmap->first << ":" << itr_find_unmap->second << " ";
    
    cout << 8 << ":" << um[8] << " ";
    
    // lower_bound is not defined for unorderd_map as there is no ordering
        // auto lower_bound_unmpa = um.lower_bound(7);
    // cout << lower_bound_unmap->first << ":" << lower_bound_unmap->second << " ";
    
    // *** set
    cout << "\n\n" << "Set" << endl;
    set<int> s = {3,5,2,4,5,91,12,32,3,5,2};
    
    auto find_set = s.find(5);
    if (find_set != s.end())
        cout << *find_set << ":found ";
        
    set<int>::iterator itr_find_set = s.find(91);
    if (itr_find_set != s.end())
        cout << *itr_find_set << ":found ";
        
    //cout << s[1] << " ";    
    
    auto lower_bound_set = s.lower_bound(10);
    if (lower_bound_set != s.end())
        cout << *lower_bound_set << ":found_lb ";
        
    set<int>::iterator itr_lower_bound_set = s.lower_bound(32);
    if (itr_lower_bound_set != s.end())
        cout << *itr_lower_bound_set << ":found_itr_lb ";
        
        
    //*** Unordered Set
    cout << "\n\n" << "Unordered Set" << endl;
    unordered_set<int> us = {4,2,3,4,1,24,3,43,3,421,1,8,3};
    
    auto find_unset = us.find(1);
    if (find_unset != us.end())
        cout << *find_unset << ":found ";
        
    unordered_set<int>::iterator itr_find_unset = us.find(421);
    if (itr_find_unset != us.end())
        cout << *itr_find_unset << ":found ";
    
    // this won't work as the elements are not place in any particular order        
    // auto lower_bound_unset = us.lower_bound(10);
    // if (lower_bound_unset != us.end())
    //     cout << *lower_bound_unset << ":found_lb ";
    
    return 0;
}




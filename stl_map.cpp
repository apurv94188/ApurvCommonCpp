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
    
    // *** find ***
    auto find_map = m.find(8);
    cout << find_map->first << ":" << find_map->second << " ";
    
    ++find_map;
    cout << find_map->first << ":" << find_map->second << " ";    
    
    map<int,int>::iterator itr_find_map = m.find(93);
    cout << itr_find_map->first << ":" << itr_find_map->second << " ";
    
    cout << 8 << ":" << m[8] << " ";
    // *** * ***
    
    
    // *** lower_bound ***
    auto lower_bound_map = m.lower_bound(7);
    cout << lower_bound_map->first << ":" << lower_bound_map->second << " ";
    // *** * ***
    
    
    // *** insert ***
    m.insert({20,200});
    m.insert({20,250}); // already exists  -- original value is retained -- doesn't throw any error
    cout << m[20]; // 200
    m.insert({16,7});
    // *** * ***
    
    
    // *** erase ***
    m.erase(5);
    m.erase(99);    // doesn't exist still 
    m.erase(find_map);  // can also give an iterator - but element should exist otherwise throws error
    // m.erase(lower_bound_map);  // this throws segmentation fault as the itr points to 8 which was erase in the prev line
    
    cout << "map element: ";
    for (pair<int,int> e : m)
        cout << e.first <<" " << e.second << " ";
    
    // function to erase in a given range
    // find() returns the iterator reference to
    // the position where the element is
    auto itr_erase_begin = m.find(2);
    auto itr_erase_end = m.find(5);
    mp.erase(itr_erase_begin, itr_erase_end); 
    // *** * ***
        
    
    // *** modify ***
    cout << "\nModify Map";
    m[16] = 1616;
    find_map = m.find(3);
    find_map->second = 33;
    
    cout << "\nmap element: ";
    for (pair<int,int> e : m)
        cout << e.first <<":" << e.second << " ";
    // *** * ***
    
    
    return 0;
}

#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Unordered Map" << endl;
        
    //*** unordered_map
    cout << "\n\n" <<"Unordered Map"<< endl;
    unordered_map<int,int> um = {{3,4},{5,4},{8,9},{93,2}};
    
    auto find_unmap = um.find(8);
    cout << find_unmap->first << ":" << find_unmap->second << " ";
    
    unordered_map<int,int>::iterator itr_find_unmap = um.find(93);
    cout << itr_find_unmap->first << ":" << itr_find_unmap->second << " ";
    
    cout << 8 << ":" << um[8] << " ";
    
    // lower_bound is NOT DEFINED for unorderd_map as there is no ordering
    // hence the below line will throw error as "no member named lower_bound"
    // auto lower_bound_unmpa = um.lower_bound(7);
    // cout << lower_bound_unmap->first << ":" << lower_bound_unmap->second << " ";
    
    // but the below line won't throw error as still we can iterate over unordered_map
    // but we can't be sure of the element we would find as we move ahead
    ++find_unmap;
    cout << find_unmap->first << ":" << find_unmap->second;
    
    // Modify
    cout << "\nModify Unordered Map\n";
    find_unmap = um.find(93);
    find_unmap->second = 9933;
    for (auto itr: um)
        cout << itr.first << ":" << itr.second << " ";
    
    return 0;
}

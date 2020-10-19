// common functionality of vector

#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {10,11,12,13,14,15,16,17};
    
    // insert
    v.push_back(18);
    v.insert(v.begin(), 9);
    v.insert(v.begin()+3, 31);
    v.insert(v.end()-1, 31);
    v.insert(v.end(), 41);  // same as push_back
    //v.push_front(9);   // error
    
    // insert vector
    vector<int> another = {91,92,93};
    v.insert(v.begin()+1, another.end()-3, another.end());
    v.insert(v.begin()+1, v.end()-3, v.end());  // appending part of same vector to itself create can give unexpected result
    
    for (auto e : v)
        cout << e << " ";
    cout << endl;    
    
    
    // access
    cout << " a:"<< v[3];
    
    cout << " b:" << *(v.begin()+3);
    
    auto itr = v.end()-1;   // last element
    cout << " c:" << *itr;
    
    --itr;
    cout << " d:" << *itr;
    
    vector<int>::iterator itr_v = v.begin()+1;
    cout << " e:" << *itr_v;
    
    ++itr_v;
    cout << " f:" << *itr_v;
    
    cout << " fa:" << v.front();
    cout << " fb:" << v.back();
    
    // modify
    cout << "\n\n" << "Modify"<<endl;
    v[3] = 333;
    cout << " g:" << v[3];
    *itr = 444;
    cout << " h:" << *itr;
    
    v = {10,44,11,12,55,13,44,14,55,15,44,16,55,17,44,91,92,93,94,95,96};
    // delete element
    v.pop_back();
    cout << " i:" << v.back();
    // v.pop_front();   // error
    
    v.erase(v.begin()+5);  // delete 6th element
    cout << " j:" << v[5];
    
    v.erase(v.end()-8, v.end()-1);  // won't delete the last element
    
    // delete element by value
    vector<int>::iterator itr_new_end_v = std::remove(v.begin(), v.end(), 44);
    // but v.end still points to something absurd. As elements (44) have not been removed
    // just shifted to last. SO we need to erase them completely from vector
    v.erase(itr_new_end_v, v.end());    // this deletes those elements (44) from vector completely
    
    cout << "\n";
    for (auto e : v)
        cout << e << " ";
    cout << endl;
    
    
    // sort
    cout << "\n\n" << "Sort" << endl;
    v = {99,4,12,54,634,5,37,455,26,7568,76,765,5,67,5434,32456,568,76,5,2345,78,67,53,45,356,546,435,34};
    std::sort(v.begin()+3, v.end()-3);
    cout << "\n";
    for (auto e : v)
        cout << e << " ";
    cout << endl;
    
    std::sort(v.rbegin()+3, v.rend()-3);
    cout << "\n";
    for (auto e : v)
        cout << e << " ";
    cout << endl;
    
}


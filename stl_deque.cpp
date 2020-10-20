#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    cout << "De-Queue" << endl;
    
    // *** intitialize ***
    deque<int> dq = {14, 15, 16, 17, 18, 19, 20};
    cout << dq.front() << " " << dq.back() << endl;
    
    // *** push ***
    dq.push_back(17);
    dq.push_front(13);
    cout << dq.front() << " " << dq.back() << endl;
    
    // *** pop ***
    dq.pop_front();
    dq.pop_back();
    cout << dq.front() << " " << dq.back() << endl;
    
    // *** iterator ***
    deque<int>::iterator itr = dq.begin();
    ++itr;
    cout << *itr << endl;
    cout << dq.at(3) << endl;
    
    // *** insert ***
    dq.insert(itr, 999);
    cout << "display deque" << endl;
    for (auto itr_dq : dq)
        cout << itr_dq << " ";
    
    
    return 0;
}

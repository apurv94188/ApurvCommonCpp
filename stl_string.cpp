#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "This is an example of string";
    
    std::size_t find_idx = str.find("example");
    if (find_idx != std::string::npos)
        cout << str.substr(find_idx);
        
    return 0;
}

// cout class object (without any function call).
// cout << classObject;
// If you want to print the class object with std::cout just like primary vairable type

#include <iostream>
#include <vector>
using namespace std;

class CCell {
    
    private:
    int m_iVal;
    int m_iRow, m_iCol;
    
    public:
    CCell (int v, int r, int c) : m_iVal(v), m_iRow(r), m_iCol(c) {}
    
    friend std::ostream & operator<<(std::ostream & os, const CCell * cell);
    
    // use this if you are going to have reference to object rather than pointer
    //friend std::ostream & operator<<(std::ostream & os, const CCell & cell);
    
    
};

/*
// use this if you are going to have reference to object rather than pointer
std::ostream & operator<<(std::ostream & os, const CCell & cell)
{
  os << cell.m_iVal;
  return os;
}
*/

std::ostream & operator<<(std::ostream & os, const CCell * cell)
{
    os << "[" + to_string(cell->m_iRow) + "][" + to_string(cell->m_iCol) + "]:" + to_string(cell->m_iVal);
    return os;
}


int main()
{
    vector<CCell*> cells;
    CCell* cell;
    for (int r=1; r<3; ++r) {
        for (int c=1; c<3; ++c) {
            cell = new CCell(r+c, r, c);
            cells.push_back(cell);
        }
    }
    
    // prinitng cell object using cout
    for (CCell *cell : cells)
        cout << cell << " ";
    return 0;
}

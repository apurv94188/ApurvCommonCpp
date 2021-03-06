
/*
output in below code is:
[1][1]:2 [1][2]:3 [2][2]:4

// check here - we don't have [2][1]:3 in the output because we used set
// and since equality here only checks for m_iVal - 2 object with same value (here val is 3) can't be saved in a set
// set calls comaprerator operator () from the CompareCell class
// while checking 2 values which one is smaller or both equal, it calls operator () 2 times
// with order of variables reveresed in the 2nd call
// if both calls return 'false' then that means the object are equal
*/


#include <iostream>
#include <set>
using namespace std;

class CCell {
    
    private:
    int m_iVal;
    int m_iRow, m_iCol;
    
    public:
    int get_val () const {return m_iVal;}
    int get_row () const {return m_iRow;}
    int get_col () const {return m_iCol;}
    
    CCell (int v, int r, int c) : m_iVal(v), m_iRow(r), m_iCol(c) {}
    
    friend std::ostream & operator<<(std::ostream & os, const CCell * cell);
    
};

std::ostream & operator<<(std::ostream & os, const CCell * cell)
{
    os << "[" + to_string(cell->m_iRow) + "][" + to_string(cell->m_iCol) + "]:" + to_string(cell->m_iVal);
    return os;
}

class CompareCell {
    public:
    bool operator () (const CCell *left, const CCell *right) {
        // get_val() must be declared 'const' othervise it will throw error
        // because left and right ptr are declared 'const' here
        // and so they shouldn't modify any variable of the class
        return left->get_val() < right->get_val();
    }
};


int main()
{
    set<CCell*, CompareCell> cells;
    CCell* cell;
    for (int r=1; r<3; ++r) {
        for (int c=1; c<3; ++c) {
            cell = new CCell(r+c, r, c);
            cells.insert(cell);
        }
    }
    
    // prinitng cell object using cout
    for (CCell *cell : cells)
        cout << cell << " ";
    return 0;
}


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i1;
    //Iterator is a pointer to a data structure within a range of elements
    //Working is similar to that of a pointer in C
    //Use the dereferencing operator (*) so as to get the value of the element being pointed by the iterator
    // v(5) = {2, 3, 5, 6, 7};
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }
    //push_back inserts an element at the end of the vector
    //pop_back delets an element from the end of the vector
    //v.begin() function points to the beginning of the vector
    //v.end() function points to the end of the vector
    for (i1 = v.begin(); i1 != v.end(); i1++)
    {
        cout << *i1 << endl;
        //Using the dereferencing operator to print the element pointed to by the iterator
    }
    return 0;
}

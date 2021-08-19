#include <iostream>
#include <set>
using namespace std;
int main()
{
    //Sets are used to store unique values and keys are the elements present in the set
    set<int> s;
    set<int>::iterator i1;
    //An iterator will be used to access the elements of the array
    int A[] = {1, 1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(A) / sizeof(A[0]);
    //Inserting elements in the set
    for (int i = 0; i < n; i++)
    {
        s.insert(A[i]);
    }
    //Repetitive elements cannot be inserted in set
    for (i1 = s.begin(); i1 != s.end(); i1++)
    {
        cout << *i1 << endl;
    }
    //If the element is not found the find() points to the last element of the set
    //Time complexity: O(log N)
    if (s.find(10) == s.end())
    {
        cout << "Element not found\n";
    }
    else
    {
        cout << "Element is present\n";
    }
    return 0;
}

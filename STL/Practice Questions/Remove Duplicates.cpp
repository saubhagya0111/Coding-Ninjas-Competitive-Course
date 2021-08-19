#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
//Problem Name: Remove Duplicates
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i1;
    set<int> s;
    set<int>::iterator i2;
    int n, element;
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    for (i1 = v.begin(); i1 != v.end(); i1++)
    {
        s.insert(*i1);
    }
    for (i2 = s.begin(); i2 != s.end(); i2++)
    {
        cout << *i2 << endl;
    }
    /* Sample Test case:-
Input:-
10
105 106 111 114 105 135 138 147 111 147 114
Output:-
105
106
111
114
135
138
147*/
    return 0;
}

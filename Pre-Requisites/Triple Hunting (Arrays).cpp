#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
//Triple Hunting 
//Link to the problem:- https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=414
int main()
{
    ll n, c = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll element;
        cin >> element;
        if (element % 3 == 0)
        {
            c++;
            v.push_back(i + 1);
        }
    }
    cout << c << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

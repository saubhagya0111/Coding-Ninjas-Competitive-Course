//Based on Array
//Link to the problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?set=simple3&problemid=416
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> v(1000, 0), v1;
    ll a, b;
    while (n--)
    {
        cin >> a >> b;
        v[a - 1]++;
        v[b - 1]++;
    }
    ll maximum = *max_element(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (maximum == v[i])
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}

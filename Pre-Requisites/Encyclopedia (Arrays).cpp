//Link to the problem: https://orac.amt.edu.au/cgi-bin/train/problem.pl?problemid=412
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int A[n], page;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> page;
        cout << A[page - 1] << endl;
    }
    return 0;
}

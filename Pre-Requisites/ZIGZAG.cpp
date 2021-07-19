//Problem is pretty similar to this except for the fact that everytime a coloumn ends it has to start from the oppsite end of the matrix 
//Similar to the graph of function sin(x) 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n, a, b;
    cin >> n;
    ll A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << A[i][j] << " ";
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << A[i][j] << " ";
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool sorted(int A[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (A[0] > A[1])
    {
        return false;
    }
    return sorted(A + 1, n - 1);
}
int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int result = sorted(A, n);
    if (result==0)
    {
        cout << "The array is not sorted\n";
    }
    else if (result==1)
    {
        cout << "The array is sorted\n";
    }

    return 0;
}

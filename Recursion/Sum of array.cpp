#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int sum(int A[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return (sum(A, n - 1) + A[n-1]);
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
    int size = sizeof(A) / sizeof(A[0]);
    cout << "Sum of the elements of the array=" << sum(A, size) << endl;
    return 0;
}

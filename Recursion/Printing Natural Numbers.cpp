#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void print(int n)
{
    if (n > 0)
    {
        print(n - 1);
        cout << n << " ";
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    print(n);
    return 0;
}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll power(int base, int exp)
{
    int pro = 1;
    //Base condition as anything raised to zero/one is the number itself  
    if (exp == 0)
    {
        return 1;
    }
    return base * power(base, exp - 1);
}
int main()
{
    int base, exp;
    cout << "Enter the base\n";
    cin >> base;
    cout << "Enter the exponent\n";
    cin >> exp;
    cout << power(base,exp) << endl;
    return 0;
}

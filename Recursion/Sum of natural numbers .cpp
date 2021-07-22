#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int net = sum(n);
    cout << "The sum of the first " << n << " natural numbers is " << net << endl;
}

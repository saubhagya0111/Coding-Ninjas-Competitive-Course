#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n)
{
    int flag = 1;
    //Every non prime number will have at least one factor except one b/w 2 and its sqrt(n)
    //1 hasn't been checked for as 1 is the factor for all the numbers
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    //Loop will terminate if at any instant factor is found
    //To improve the time complexity of the program
    if (flag == 0)
    {
        return false;
    }
    return true;
}
//Time complexity:- O(N*sqrt(N))
//Acceptable only if N<= 10^6
int main()
{
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int counter = 0;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i) == true)
        {
            counter++;
        }
    }
    cout << counter << endl;
}

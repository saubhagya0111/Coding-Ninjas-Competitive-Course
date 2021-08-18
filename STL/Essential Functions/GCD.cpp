#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a = 10, b = 20;
    //Inbuilt function to find the HCF of the two given numbers
    //Present in algo.h
    int hcf = __gcd(a, b);
    cout << hcf << endl;
}

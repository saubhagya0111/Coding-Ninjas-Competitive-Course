#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int a = 10, b = 20;
    //Inbuilt function to find the HCF of the two given numbers
    //Present in algo.h
    int hcf = __gcd(a, b);
    cout << hcf << endl;
    //Inbuilt function to swap the two given numbers
    swap(a, b);
    cout << "After Swapping value of a=" << a << endl;
    cout << "After Swapping value of b=" << b << endl;
    //Inbuilt function to find the maximum of two given entities
    cout << max(a, b) << endl;
    //Inbuilt function to find the min of two given entities
    cout << min(a, b) << endl;
    //Inbuilt function to find the power using STL
    cout << pow(a, b) << endl;
    return 0;
}

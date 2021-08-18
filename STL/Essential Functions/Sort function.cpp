#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int A[] = {1, 5, 9, 10, 22};
    int n = sizeof(A) / sizeof(A[0]);
    //Provide the beginning and end point of the array
    //Inbuilt function to use the sort algorithm
    sort(A, A + n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

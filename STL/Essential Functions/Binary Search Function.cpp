#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int A[] = {1, 5, 9, 10, 22};
    int n = sizeof(A) / sizeof(A[0]);
    sort(A, A + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << A[i] << endl;
    // }
    //Provide the beginning, end point of the array and the key element
    //Inbuilt function to use the binary search algorithm
    //Returns 1 iff the key is found else returns zero
    cout << binary_search(A, A + n, 10) << endl;
}

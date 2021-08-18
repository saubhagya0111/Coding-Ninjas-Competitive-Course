#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> A = {1, 5, 9, 10, 22};
    int n = sizeof(A) / sizeof(A[0]);
    sort(A.begin(), A.end());
    vector<int>::iterator i1, i2, i3;
    i1 = upper_bound(A.begin(), A.end(), 22);
    //Used to return the index of the element searched in the data structure
    //If multiple values are present then it returns the value of the index with the first occurrence
    //In case the element is not found it gives out the index of the element just larger than the key
    //Passes the value to the iterator and the index can be printed by subtracting the value of the iterator from the begin function
    cout << i1 - A.begin() << endl;
    // cout << binary_search(A, A + n, 10) << endl;
}

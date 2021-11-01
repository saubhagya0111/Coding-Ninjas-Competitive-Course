#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate_array(int a[], int n, int rotations)
{
    //Transferring the elements at the end one by one (Brute Force Approach)
    //Time complexity : O(N^2)
    while (rotations--)
    {
        int temp = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[n - 1] = temp;
    }
}
//Using another optimized approach the first d elements of the array can be stored in another array and then remaining elements can be rearranged to get the desiered array
void rotate_array1(int a[], int n, int rotations)
{
    //Reverse the entire array
    reverse(a, a + n);
    reverse(a, a + n - rotations);
    //Reverse the elements that lie in the range of number of rotations that are needed to be done
    int remaining_elements = n - rotations;
    //Find the elements which occupy the terminal indexes (which have already been moved to the end) and are required to be rearranged
    reverse(a + remaining_elements, a + n);
    //Reversing the elements to get the desired array
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    //Number of rotations of an array that are supposed to be performed
    int n1 = 2;
}

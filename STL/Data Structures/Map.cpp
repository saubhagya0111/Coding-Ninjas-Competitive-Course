#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m1;
    map<int, int>::iterator i1;
    int arr[] = {1, 2, 2, 3, 3, 4, 5, 6, 7, 7, 7, 7, 8, 9, 0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        m1[arr[i]] = m1[arr[i]] + 1;
        //Increment operator does not work here
        //Increment the value by one in order to store the frequency of the integer
    }
    //map_name.erase() function is used to delete an element from the array
    for (i1 = m1.begin(); i1 != m1.end(); i1++)
    {
        cout << i1->first << " " << i1->second << endl;
    }
    cout << endl;
    m1.erase(0);
    //Displaying the elements of the map after deletion of zero
    for (i1 = m1.begin(); i1 != m1.end(); i1++)
    {
        cout << i1->first << " " << i1->second << endl;
    }
    return 0;
}

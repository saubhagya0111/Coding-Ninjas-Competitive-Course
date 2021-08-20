 /*Find the Unique Element
Send Feedback
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
 Note:
Unique element is always present in the array/list according to the given condition.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the unique element present in the array.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^6

Time Limit: 1 sec
Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
10*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;
//Approach 1:- USing map the frequency of each integer is calculated and stored if the corresponding value of the freqency is one the integer is printed
//Time Complexity:- O(n) --> n=size of the data structure
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, element;
        cin >> n;
        vector<int> v1;
        map<int, int> m1;
        map<int, int>::iterator i1;
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            m1[element] = m1[element] + 1;
            v1.push_back(element);
        }
        for (i1 = m1.begin(); i1 != m1.end(); i1++)
        {
            if (i1->second == 1)
            {
                cout << i1->first << endl;
            }
        }
    }
    //Approach:- 2:- Using the BITWISE Xor operator each integer undergoes the operation and according to the property of the operator which will return the desired number
    //Time Complexity:- O(n) --> n=size of the data structure
    return 0;
}

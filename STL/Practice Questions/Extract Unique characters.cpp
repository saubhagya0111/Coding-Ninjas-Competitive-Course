/*Problem statement:-
Extract Unique characters
Send Feedback
Given a string S, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same, as in the input string.
Input format:
The first and only line of input contains a string, that denotes the value of S.
Output format :
The first and only line of output contains the updated string, as described in the task.
Constraints :
0 <= Length of S <= 10^8
Time Limit: 1 sec
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> s1;
    set<char>::iterator i1;
    for (int i = 0; i < s.length(); i++)
    {
        s1.insert(s[i]);
    }
    for (i1 = s1.begin(); i1 != s1.end(); i1++)
    {
        cout << *i1;
    }
    return 0;
}

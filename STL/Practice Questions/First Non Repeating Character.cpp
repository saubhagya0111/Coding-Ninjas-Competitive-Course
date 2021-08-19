#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<char, int> m;
    int flag = 0;
    map<char, int>::iterator i1;
    string s;
    char ch;
    cin >> s;
    //Incrementing the frequency whenever the charecter is encountered by traversing through the entire string
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]] = m[s[i]] + 1;
    }
    for (i1 = m.begin(); i1 != m.end(); i1++)
    {
        //Whenever the freqency is equal is one the charecter is printed
        if (i1->second == 1)
        {
            cout << i1->first << endl;
            flag = 1;
            break;
        }
    }
    //If no charecter has the frequency equal to one the first charecter of the array is printed
    if (flag == 0)
    {
        cout << s[0] << endl;
    }

    return 0;
}

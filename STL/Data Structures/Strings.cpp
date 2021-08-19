#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "Saubhagya";
    string s2(s1);
    //Copies the string s1 into s2 and has the same word "Saubhagya"
    // cout << s1 << endl;
    // cout << s2 << endl;
    string s3(s1, 0, 3);
    //Copies the charecters from the indexes 0 to 3 of the string s1 to s3     //s3="Sau"
    cout << s3 << endl;
    string s4 = s1.substr(0, 3);
    //Prints the substring between the indexes 1 to 4
    cout << s4 << endl;
    //Compare function takes the string to be compared as an argument and gives out 0 if they are equal
    if (s3.compare(s4) == 0)
    {
        cout << s3 << "==" << s4 << endl;
    }
    else
    {
        cout << s3 << "!=" << s4 << endl;
    }
    //(string_name).length returns the length of the string
    return 0;
}

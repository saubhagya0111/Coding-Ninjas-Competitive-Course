#include <iostream>
#include <utility>
using namespace std;
int main()
{
    //Syntax:-  pair<data_type,data_type> pair_name; Header FIle:- utility
    pair<int, int> p1;
    p1 = make_pair(3, 2);
    cout << p1.first << " " << p1.second << endl;
    p1 = make_pair(4, 2);
    cout << p1.first << " " << p1.second << endl;
    p1 = make_pair(1, 2);
    cout << p1.first << " " << p1.second << endl;
    pair<int, char> p2(28, 'S');
    cout << p2.first << " " << p2.second << endl;
    return 0;
}

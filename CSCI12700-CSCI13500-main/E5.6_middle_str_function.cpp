/*
Write a function
string middle(string str)
that returns a string containing the middle character in str if the length of str is odd,
or the two middle characters if the length is even. For example, middle("middle")
returns "dd".
*/
#include <iostream>
#include <string>
using namespace std;

string middle(string str)
{
    int length = str.length();
    int mid = length / 2;
    //even letter - even    4 % 2 - 0
    //odd letter - odd      3 % 2 - 1
    if (length%2 == 0)
        {return str.substr(mid -1,2);}  //mid - 1 = 3 because middle index is 3 not 4 and (start of index, count)
    else
        {return str.substr(mid,1);}     //mid because middle index is 4 in 0 to 8 of 9 letters and (start of index, count)              
}

int main()
{
    cout << middle("middle") << endl;
    cout << middle("midle") << endl;
    return 0;
}
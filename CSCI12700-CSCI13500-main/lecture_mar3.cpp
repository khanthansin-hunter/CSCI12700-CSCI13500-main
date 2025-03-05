#include <iostream>
using namespace std;

int main()
{
    string str = "We think in generalities, but we live in details.";
    string str_2 = str.substr(3,5);
    string str_3 = str.substr(str.find("live"));
    cout << str << endl << str_2 << endl << str_3;
}
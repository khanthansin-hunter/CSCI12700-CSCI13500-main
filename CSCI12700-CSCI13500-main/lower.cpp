/*
Author: Khant Than Sin
Course: CSCI-13500
Instructor: Tong Yi
Assignment: Lab4D
 
prints * in every condition as long as j is not larger value than i
*/
#include <iostream>
using namespace std;

int main()
{
    int length;
    cout << "Input side length: ";
    cin >> length;
    cout << endl;
    for (int i=0; i<length; i++)
    {
        for (int j=0; j<length; j++)
        {
            if (i == j || j<i)
                cout << "*";
        }
        cout << endl;
    }
}
/*
Write a program lower.cpp that prints the bottom-left half of a square, given the side length.

Example:
Input side length: 6
 
Shape:
*
**
***
****
*****
******
*/
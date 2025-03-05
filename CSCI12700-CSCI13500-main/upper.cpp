/*
Author: Khant Than Sin
Course: CSCI-13500
Instructor: Tong Yi
Assignment: Lab4E
 
prints a star unless i is smaller than j
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
                if (i==j || i<j)
                    cout << "*";
                else
                    cout << " ";
            }
        cout << endl;
    }
}
/*
Write a program upper.cpp that prints the top-right half of a square, given the side length.

Example:
Input side length: 5
 
Shape:
*****
 ****
  ***
   **
    *
*/
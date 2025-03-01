#include <iostream>
using namespace std;

int main()
{
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    for (int line = 0; line < width; line ++)
        cout << "-";
    cout << endl;
    for (int x = 0; x < height; x++)    //4
    {
        for (int y = 0; y < width; y++) //7
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
Write a program box.cpp that asks the user to input width and height
prints a solid rectangular box of the requested size using asterisks.

Also, print a line Shape: between user input and the printed shape (to separate input from output).

Example:
Input width: 7
Input height: 4
 
Shape:
*******
*******
*******
*******
Hint:
First find how to print one row of stars (print the asterisk character width times followed by end-of-line).
Then, once you know how to print one line of stars, repeat it height times (using a loop).
*/
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Input size: ";
    cin >> size;
    cout << endl;
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (i == j || (i + j) == size-1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
/*
Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension.

Example:
Input size: 8
 
Shape:
*      *
 *    *
  *  *
   **
   **
  *  *
 *    *
*      *
*/
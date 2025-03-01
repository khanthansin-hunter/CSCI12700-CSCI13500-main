#include <iostream>
using namespace std;

int main()
{
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << endl;
    for (int i=0; i<height; i++)
    {
        for (int j=0; j<width; j++)
        {
            if ((i + j) == 0 || (i + j) % 2 == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
/*
Write a program checkerboard.cpp that asks the user to input width and height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).

Example:
Input width: 11
Input height: 6
 
Shape:
* * * * * *
 * * * * * 
* * * * * *
 * * * * *
* * * * * *
 * * * * *
Hint:
You used nested loops in the previous task that looked probably like

for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
 
        ...
    
    }
}
Inside the loops, you can add an if statement that will be conditionally printing asterisk * or (space) depending on the coordinates row and col.
*/
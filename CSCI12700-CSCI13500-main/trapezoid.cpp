#include <iostream>
using namespace std;

int main()
{
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl;

    if (height > (width+1)/2)
    {
        cout << "Impossible shape!";
        return 0;
    }
    else
    {
        for (int i=0; i<height; i++)
        {
            for (int j=0; j<width; j++)
            {
                if (j < i || (i+j)>=width)
                    cout << " ";
                else
                    cout << "*";
            }
            cout << endl;
        }
    }
}
/*
Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.

However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!

Example 1:
Input width: 12
Input height: 5
 
Shape:
************
 **********
  ********
   ******
    ****

Example 2:
Input width: 5
Input height: 3
 
Shape:
*****
 ***
  *

Hint:
You can start with the number of

spaces = 0;
stars = width;
On each line, print that number of spaces followed by that number of stars. After that, the number of spaces gets incremented by 1, while the number of stars gets decremented by 2:

spaces += 1;
stars -= 2;
*/
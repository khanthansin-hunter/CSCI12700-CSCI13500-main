/*
Author: Khant Than Sin
Course: CSCI-13500
Instructor: Tong Yi
Assignment: Lab4G
 

*/
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

   for (int i=0; i<height; i++)
   {
      for (int j=0; j<width; j++)
      {
         if ((i/3)%2 == (j/3)%2)
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
Write a program checkerboard3x3.cpp that asks the user to input width and height and prints a checkerboard of 3-by-3 squares. 
(It should work even if the input dimensions are not a multiple of three.)

Example 1:
Input width: 16
Input height: 11
 
Shape:
***   ***   ***   0,0 0,1 0,2           0,6 0,7 0,8             0,12 0,13 0,14
***   ***   ***   1,0 1,1 1,2           1,6 1,7 1,8             1,12 1,13 1,14
***   ***   ***   2,0 2,1 2,2           2,6 2,7 2,8             2,12 2,13 2,14
   ***   ***   *             3,3 3,4 3,5           3,9 3,10 3,11              3,15
   ***   ***   *             4,3 4,4 4,5           4,9 4,10 4,11              4,15
   ***   ***   *             5,3 5,4 5,5           5,9 5,10 5,11              5,15
***   ***   ***   6,0 6,1 6,2           6,6 6,7 6,8             6,12 6,13 6,14
***   ***   ***   7,0 7,1 7,2           7,6 7,7 7,8             7,12 7,13 7,14
***   ***   ***   8,0 8,1 8,2           8,6 8,7 8,8             8,12 8,13 8,14
   ***   ***   *
   ***   ***   *

Example 2:
Input width: 27
Input height: 27
 
Shape:
***   ***   ***   ***   ***
***   ***   ***   ***   ***
***   ***   ***   ***   ***
   ***   ***   ***   ***   
   ***   ***   ***   ***   
   ***   ***   ***   ***   
***   ***   ***   ***   ***
***   ***   ***   ***   ***
***   ***   ***   ***   ***
   ***   ***   ***   ***   
   ***   ***   ***   ***   
   ***   ***   ***   ***   
***   ***   ***   ***   ***
***   ***   ***   ***   ***
***   ***   ***   ***   ***
   ***   ***   ***   ***   
   ***   ***   ***   ***   
   ***   ***   ***   ***   
***   ***   ***   ***   ***
***   ***   ***   ***   ***
***   ***   ***   ***   ***
   ***   ***   ***   ***   
   ***   ***   ***   ***   
   ***   ***   ***   ***   
***   ***   ***   ***   ***
***   ***   ***   ***   ***
***   ***   ***   ***   ***
*/
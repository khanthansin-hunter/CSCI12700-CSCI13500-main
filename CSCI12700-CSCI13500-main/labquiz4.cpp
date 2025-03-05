#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    double j = 0;
    double i = 0;
    int user_input;
    cout << "Enter a series of integer: ";
    //while (a!=b)   
    //this does not stop program from receiving user input since Ctrl + D only signals the program that the user is ending the input
    while (cin >> user_input)
    {
        j++;
    }
    if (user_input == 0)
    {
        i++;
    }
    cout << "Enter " << i << "zeros.";
    cout << j;
    double percentage = (i/j)*100;
    cout << "Percentage of zeros to total numbers " << percentage << "%";
}
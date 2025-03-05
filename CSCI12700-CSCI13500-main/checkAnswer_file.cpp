/*
format
question:       question text
answer:         expected answer for the question
explanation:    explain why we get the answer
version:        year and version of an exam
label:          problem label in the original exam
type:           keyword for related topics for the question
*/

/*

*/

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

struct Question{string text, answer, explanation, version, type, label;};

int main()
{
    const int SIZE = 200;
    Question question[SIZE];

    double correct_answer=0, user_answer=0;
    int tries = 0;
    bool correct_answer;

    //get file and read file
    string filename;
    string input;
    cout << "Enter file name: ";
    cin >> filename;
    ifstream fin(input);

    //file error
    if (fin.fail())
    {
        cerr << "File cannot be opened!";
        exit(1);
    }

    int count = 0;

    //loop for each question
    //  1. display question
    //  2. take input 3 times
    //      check if input == answer
    //      if yes then display tries and true
    //      if no then display tries and false
    //  3. if yes then loop breaks
    //  4. if input reaches 3 then next question

    for (int i=0; i<SIZE; i++)
    {
        cout << "Question: " << endl;
        while (cin >> input)
        {
            user_answer ++;
            if (input == )
            {
                tries ++;
                cout << boolalpha << correct_answer << endl;
                cout << "Number of tries: " << tries << endl;
            }
            else if (input != )
            {
                tries ++;
                correct_answer = false;
                cout << boolalpha << correct_answer << endl;
                cout << "Number of tries: " << tries << endl;
            }
        }
    }



    fin.close();
}
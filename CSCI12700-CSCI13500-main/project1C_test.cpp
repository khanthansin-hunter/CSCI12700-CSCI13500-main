#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

struct Question
{
    string text;
    string answer;
    string explanation;
    string version;
    string type;
    string label;
};

int display_questions(string filename, Question questions[], int SIZE)
{
    ifstream fin(filename);
    //File opening error
    if (fin.fail())
    {
        cerr << "File cannot be opened!";
        exit(1);
    }
    int line_count = 0;
    string line;

    while (getline(fin,line))
    {
        while (line_count < SIZE)
        {
            if (line.starts_with("question: "))
            {
                questions[line_count].text = line.substr(strlen("question: "));
            }
            if (line.starts_with("answer: "))
            {
                questions[line_count].answer = line.substr(strlen("answer: "));
            }
            

        }
    }
}

int main()
{
    //initialize variables
    const int SIZE = 200;
    Question questions[SIZE];
    string filename;
    int input;
    double inputs = 0;
    double corrects = 0;
    int tries = 0;
    int answer = 11;
    bool correct_answer = true;

    cout << "What is the name of the file?" << endl;
    cin >> filename;
    ifstream fin(filename);

    

    //Take input for 3 times and skip
    //Display true / false
    //Display number of tries
    //Increment correct answer && inputs if true
    //Increment inputs if false
    while (cin >> input)
    {
        if (input == answer)
        {
            tries ++;
            inputs ++;
            corrects ++;
            cout << boolalpha << correct_answer << endl;
            cout << "Number of tries: " << tries << endl;
            break;
        }
        if (input != answer)
        {
            tries ++;
            correct_answer = false;
            cout << boolalpha << correct_answer << endl;
            cout << "Number of tries: " << tries << endl;
            if (tries == 3)
            {
                inputs ++;
                break;
            }
        }
    }
    cout << "Number of inputs: " << inputs << endl;

    //Percentage of correct answers
    double percentage = ((corrects/inputs)*100);
    if (percentage >= 90)
        cout << "Excellent";
    else if (percentage >= 80)
        cout << "Good";
    else if (percentage >= 60)
        cout << "Pass";
    else
        cout << "please ask help ASAP";
    fin.close();
}
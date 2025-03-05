#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

struct Question {
    string question;
    string answer;
    string explanation;
    string version;
    string type;
};

int loadQuestions(const string& filename, Question questions[], int capacity) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 0;
    }
    int count = 0;
    string line;
    
    while (getline(file, line)) {
        if (line.starts_with("question:") && count < capacity) {
            questions[count].question = line.substr(strlen("question: "));
            
            while (getline(file, line) && !line.starts_with("answer:")) {
                questions[count].question += " " + line;
            }
            questions[count].answer = line.substr(strlen("answer: "));
            
            while (getline(file, line) && !line.starts_with("explanation:")) {
                questions[count].answer += " " + line;
            }
            questions[count].explanation = line.substr(strlen("explanation: "));
            
            while (getline(file, line) && !line.starts_with("version:")) {
                questions[count].explanation += " " + line;
            }
            questions[count].version = line.substr(strlen("version: "));
            
            while (getline(file, line) && !line.starts_with("type:")) {
                questions[count].version += " " + line;
            }
            questions[count].type = line.substr(strlen("type: "));
            
            count++;  // Move to next question slot
        }
    }
    file.close();
    return count;
}

int quizUser(Question questions[], int count) {
    int correct = 0;
    for (int i = 0; i < count; i++) {
        int attempts = 3;
        string userAnswer;
        bool answeredCorrectly = false;

        cout << questions[i].question << endl;
        while (attempts > 0) {
            cout << "Your answer: ";
            getline(cin, userAnswer);
            if (userAnswer == questions[i].answer) {
                cout << "Correct!" << endl;
                correct++;
                answeredCorrectly = true;
                break;
            } else {
                cout << "Incorrect. Attempts left: " << --attempts << endl;
            }
        }
        if (!answeredCorrectly && !questions[i].explanation.empty()) {
            cout << "Explanation: " << questions[i].explanation << endl;
        }
    }
    return correct;
}

int main() {
    const int capacity = 200;
    Question questions[capacity];
    string filename;
    
    cout << "Enter file name (cs135_midterm_f24_v2.txt or civics_65_20.txt): ";
    cin >> filename;
    cin.ignore(); // Ignore newline after filename input
    
    int count = loadQuestions(filename, questions, capacity);
    if (count == 0) {
        cout << "No questions found in the file." << endl;
        return 1;
    }
    
    int correct = quizUser(questions, count);
    double percentage = (correct * 100.0 / count);
    cout << "Quiz finished!" << endl;
    cout << "Your score: " << percentage << "%" << endl;
    if (percentage >= 90) cout << "Excellent" << endl;
    else if (percentage >= 80) cout << "Good" << endl;
    else if (percentage >= 60) cout << "Pass" << endl;
    else cout << "Please ask for help ASAP" << endl;
    
    return 0;
}

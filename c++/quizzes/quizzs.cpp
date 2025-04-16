#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Question {
    string questionText;
    string options[4];
    char correctOption; // 'A', 'B', 'C', 'D'
};

vector<Question> quizBank;

void addQuiz() {
    Question q;
    cout << "\nEnter the question: ";
    cin.ignore();
    getline(cin, q.questionText);

    cout << "Enter option A: ";
    getline(cin, q.options[0]);

    cout << "Enter option B: ";
    getline(cin, q.options[1]);

    cout << "Enter option C: ";
    getline(cin, q.options[2]);

    cout << "Enter option D: ";
    getline(cin, q.options[3]);

    cout << "Enter correct option (A/B/C/D): ";
    cin >> q.correctOption;
    q.correctOption = toupper(q.correctOption);

    quizBank.push_back(q);
    cout << "Question added successfully!\n";
}

void startQuiz() {
    if (quizBank.empty()) {
        cout << "No questions available. Please add questions first.\n";
        return;
    }

    for (int i = 0; i < quizBank.size(); ++i) {
        cout << "\nQ" << i + 1 << ": " << quizBank[i].questionText << endl;
        cout << "A) " << quizBank[i].options[0] << endl;
        cout << "B) " << quizBank[i].options[1] << endl;
        cout << "C) " << quizBank[i].options[2] << endl;
        cout << "D) " << quizBank[i].options[3] << endl;

        char userAnswer;
        cout << "Your answer (A/B/C/D): ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);

        if (userAnswer == quizBank[i].correctOption) {
            cout << "\033[1;32mCorrect!\033[0m  "<<endl;
        } else {
            cout << "\033[1;31mWrong!\033[0m "<<endl;
            cout << "Correct answer was: " << quizBank[i].correctOption <<endl;
        }

        
        
    }
}

int main() {
    int choice;

    do {
        cout << "\n--- Quiz Program ---\n";
        cout << "1. Start Quiz\n";
        cout << "2. Add Question\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: startQuiz(); break;
            case 2: addQuiz(); break;
            case 3: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}

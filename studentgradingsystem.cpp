#include <iostream>
using namespace std;

class GradingSystem {
private:
    int score;

public:
    GradingSystem(int s) {
        score = s;
    }

    char calculateGrade() {
        if (score >= 90) {
            return 'A';
        } else if (score >= 80) {
            return 'B';
        } else if (score >= 70) {
            return 'C';
        } else if (score >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }
};

int main() {
    int studentScore;
    cout << "Enter the student's score: ";
    cin >> studentScore;

    GradingSystem student(studentScore);

    char grade = student.calculateGrade();
    cout << "The student's grade is: " << grade << endl;

    return 0;
}
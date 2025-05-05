#include <iostream>
using namespace std;


void lowestGrade100(double grades[], int size) {
    int lowestIndex = 0;
    for (int i = 1; i < size; i++) {
        if (grades[i] < grades[lowestIndex]) {
            lowestIndex = i;
        }
    }
    grades[lowestIndex] = 100.0;
}


void examCurve(double grades[], int size) {
    double highest = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    double curveAmount = 100.0 - highest;
    for (int i = 0; i < size; i++) {
        grades[i] += curveAmount;
    }
}


char letterGrade(int grade) {
    const char letters[] = {'A', 'B', 'C', 'D', 'F'};
    const int thresholds[] = {90, 80, 70, 60, 0};

    if (grade < 0 || grade > 100) return 'X';

    for (int i = 0; i < 5; i++) {
        if (grade >= thresholds[i]) {
            return letters[i];
        }
    }
    return 'X'; // fallback (should not be reached)
}

// Main function to test the above
int main() {
    double grades[10] = {85.5, 92.0, 76.0, 88.5, 59.0, 100.0, 67.5, 74.0, 82.5, 91.0};

    cout << "Original Grades:\n";
    for (int i = 0; i < 10; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;

    lowestGrade100(grades, 10);
    cout << "\nAfter Replacing Lowest Grade with 100:\n";
    for (int i = 0; i < 10; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;

    examCurve(grades, 10);
    cout << "\nAfter Curving Grades:\n";
    for (int i = 0; i < 10; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;

    cout << "\nLetter Grades:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Grade: " << grades[i] << " => " << letterGrade(static_cast<int>(grades[i])) << endl;
    }

    return 0;
}

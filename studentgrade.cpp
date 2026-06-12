#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string name[n];
    int marks[n];

    int total = 0;
    int topperMarks = -1;
    string topperName;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter student name: ";
        cin >> name[i];

        cout << "Enter marks: ";
        cin >> marks[i];

        total += marks[i];

        if(marks[i] > topperMarks) {
            topperMarks = marks[i];
            topperName = name[i];
        }
    }

    double average = (double)total / n;

    cout << "\n----- Report -----" << endl;

    for(int i = 0; i < n; i++) {
        cout << name[i] << " : " << marks[i] << endl;
    }

    cout << "\nAverage Marks: " << average << endl;
    cout << "Topper: " << topperName << " (" << topperMarks << ")" << endl;

    return 0;
}

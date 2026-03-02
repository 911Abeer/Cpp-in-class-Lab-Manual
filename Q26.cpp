#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_SUBJECTS = 5;
    string subjects[NUM_SUBJECTS] = {"Math", "Science", "English", "History", "Computer"};
    int marks[NUM_SUBJECTS];
    int total = 0;
    float percentage;
 
    cout << "SCHOOL REPORT CARD SYSTEM\n";
    for(int i = 0; i < NUM_SUBJECTS; i++) {
        cout << "Enter marks for " << subjects[i] << " (0-100): ";
        cin >> marks[i];
        
       
        while(marks[i] < 0 || marks[i] > 100) {
            cout << "Please enter marks between 0 and 100: ";
            cin >> marks[i];
        }
        
        total += marks[i];
    }
    
  
    percentage = (total / (NUM_SUBJECTS * 100.0)) * 100;
    
 
    cout << fixed << setprecision(2);
    cout << "\nRESULT\n";
    cout << "Subject-wise Marks:\n";
    for(int i = 0; i < NUM_SUBJECTS; i++) {
        cout << subjects[i] << ": " << marks[i] << "/100\n";
    }
    
    cout << "\nTotal Marks: " << total << "/" << NUM_SUBJECTS * 100 << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    
    cout << "\nGrade: ";
    if(percentage >= 90) {
        cout << "A+ (Excellent)";
    } else if(percentage >= 80) {
        cout << "A (Very Good)";
    } else if(percentage >= 70) {
        cout << "B (Good)";
    } else if(percentage >= 60) {
        cout << "C (Average)";
    } else if(percentage >= 40) {
        cout << "D (Pass)";
    } else {
        cout << "F (Fail)";
    }
    cout << endl;
    
    return 0;
}

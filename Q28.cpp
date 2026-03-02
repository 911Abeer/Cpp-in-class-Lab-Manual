#include <iostream>
using namespace std;

int main() {
    int num, evenSum = 0, oddSum = 0;
    
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> num;
        if(num % 2 == 0)
            evenSum += num;
        else
            oddSum += num;
    }
    
    cout << "Even sum: " << evenSum << "\nOdd sum: " << oddSum;
    return 0;
}
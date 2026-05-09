#include <iostream>

using namespace std;

int main() {
    int number = 51;

    while (number % 7 != 0) {
        number = number + 1;
    }

    cout << "The first number greater than 50 divisible by 7 is: " << number << endl;

    return 0;
}

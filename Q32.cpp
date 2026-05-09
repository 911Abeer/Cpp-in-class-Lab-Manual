#include <iostream>
using namespace std;

int main() {
    int n, i, j, temp;
    int arr[100];

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Array needs at least 2 elements." << endl;
        return 0;
    }

    cout << "Enter " << n << " numbers: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "The second largest element is: " << arr[1] << endl;

    return 0;
}

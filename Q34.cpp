#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int rows, column;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> column;

    int arr[50][50];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nFormatted Table:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << setw(6) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
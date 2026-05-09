#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a numbers";
    cin >> num;
    try
    {
        if (num == 0)
            throw 0;
        else if (num < 0)
            throw -1;
        else
            cout << "Valid positive number";
    }
    catch (int x)
    {
        if (x == 0)
            cout << "Zero is not allowed";
        else
            cout << "Negative number not allowed";
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw "Division by x=zero not allowed";
        cout << "Result=" << a / b;
    }
    catch (const char *msg)
    {
        cout << "Exception:" << msg;
    }

    return 0;
}
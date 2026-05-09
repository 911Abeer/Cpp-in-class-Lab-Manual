#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int g = gcd(num1, num2);
    int l = lcm(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << g << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << l << endl;

    return 0;
}
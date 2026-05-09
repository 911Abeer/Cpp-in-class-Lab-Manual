/*
27.Create a program that finds and displays all
 Armstrong numbers within a given range using nested loops.
*/
#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int num = start; num <= end; num++)
    {
        int temp = num;
        int digits = 0;
        int sum = 0;

        int t = temp;
        while (t > 0)
        {
            digits++;
            t /= 10;
        }

        t = temp;
        while (t > 0)
        {
            int digit = t % 10;
            int power = 1;
            for (int i = 0; i < digits; i++)
            {
                power *= digit;
            }
            sum += power;
            t /= 10;
        }

        if (sum == num)
        {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;
    int rewardPoints;

public:
    
    BankAccount(string name, double initialBalance, int initialPoints) {
        accountHolderName = name;
        balance = initialBalance;
        rewardPoints = initialPoints;
    }

    void withdraw() {
        if (balance >= 500 && rewardPoints >= 20) {
            balance -= 500;
            rewardPoints -= 20;
            cout << "Withdrawal successful!" << endl;
        } else {
            cout << "Insufficient balance or reward points!" << endl;
        }
    }

    void display() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
        cout << "Reward Points: " << rewardPoints << endl;
    }
};

int main() {
    BankAccount acc("Manthan", 5000, 100);

    acc.display();
    acc.withdraw();
    acc.display();

    return 0;
}

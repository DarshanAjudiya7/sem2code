#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;
    static const double MIN_BALANCE;  

public:
    BankAccount(int accNo, string name, double initialBalance) {
        accountNumber = accNo;
        accountHolder = name;
        if (initialBalance >= MIN_BALANCE)
            balance = initialBalance;
        else {
            cout << "Initial balance too low! Setting to minimum balance.\n";
            balance = MIN_BALANCE;
        }
    }

    void display() const {
        cout << "Account No: " << accountNumber
             << " | Holder: " << accountHolder
             << " | Balance: " << balance << endl;
    }

    void transfer(BankAccount &receiver, double amount) {
        if (amount <= 0) {
            cout << "Invalid transfer amount!\n";
            return;
        }
        if (balance - amount >= MIN_BALANCE) {
            balance -= amount;
            receiver.balance += amount;
            cout << "Transfer of " << amount << " successful from "
                 << accountHolder << " to " << receiver.accountHolder << ".\n";
        } else {
            cout << "Transfer failed! Minimum balance must be maintained.\n";
        }
    }
};

const double BankAccount::MIN_BALANCE = 500.0;

int main() {
    BankAccount acc1(101, "Darshan", 2000);
    BankAccount acc2(102, "Rahul", 1000);

    cout << "\nInitial Account Details:\n";
    acc1.display();
    acc2.display();

    cout << "\nTransaction 1: Transfer 1200 from Darshan -> Rahul\n";
    acc1.transfer(acc2, 1200);

    cout << "\nAfter Transaction:\n";
    acc1.display();
    acc2.display();

    cout << "\nTransaction 2: Transfer 700 from Rahul -> Darshan\n";
    acc2.transfer(acc1, 700);

    cout << "\nFinal Account Details:\n";
    acc1.display();
    acc2.display();

    return 0;
}

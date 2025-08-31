#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accNumber;
    string accountType;
    double balance;
    static int nextAccNumber; 

public:
    
    BankAccount() {
        accNumber = ++nextAccNumber;
        balance = 0;
    }
    void assignValues(string depositorName, string accType, double initialBalance) {
        name = depositorName;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " into Account " << accNumber << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from Account " << accNumber << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() const {
        cout << "Account Number: " << accNumber
             << " | Name: " << name
             << " | Balance: " << balance << endl;
    }

    bool isBalanceLow() const {
        return balance < 1000;
    }
};

int BankAccount::nextAccNumber = 0;

int main() {
    int n;
    cout << "Enter number of customers: ";
    cin >> n;

    BankAccount customers[n];

    for (int i = 0; i < n; i++) {
        string name, type;
        double balance;
        cout << "\nEnter details for customer " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Account Type (Savings/Current): ";
        cin >> type;
        cout << "Initial Balance: ";
        cin >> balance;

        customers[i].assignValues(name, type, balance);
    }

    customers[0].deposit(500);
    customers[1].withdraw(200);
    
    cout << "\n--- Customer Details ---" << endl;
    for (int i = 0; i < n; i++) {
        customers[i].display();
    }

    cout << "\n--- Customers with balance less than 1000 ---" << endl;
    for (int i = 0; i < n; i++) {
        if (customers[i].isBalanceLow()) {
            customers[i].display();
        }
    }

    return 0;
}
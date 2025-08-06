#include <iostream>
using namespace std;

class bank {
    int accno;
    char name[15];
    float balance;
public:
    void init();
    void withdraw();
    void display();
};

void bank::init() {
    cout << "Enter account number: " << endl;
    cin >> accno;
    cout << "Enter candidate name: " << endl;
    cin >> name;
    cout << "Enter balance: " << endl;
    cin >> balance;
}

void bank::withdraw() {
    float amt;
    cout << "Enter amount you want to withdraw: ";
    cin >> amt;

    if (balance >= amt) {
        balance -= amt;
        cout << "Remain amount: " << balance;
    } else {
        cout << "Your balance is low";
    }
}

void bank::display() {
    cout << "Account No: " << accno << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}

int main() {
    bank b;
    b.init();
    b.withdraw();
}

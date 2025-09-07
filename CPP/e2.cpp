#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string color;
    double cost;
    int age;

    bool IsOld() const {
        string makes[] = {"Toyota", "Honda", "Ford"};
        int lifetimes[] = {15, 12, 10};
        int n = 3;

        int lifetime = 8; 

        for (int i = 0; i < n; i++) {
            if (make == makes[i]) {
                lifetime = lifetimes[i];
                break;
            }
        }

        return age > (lifetime / 2);
    }

public:
    void readData() {
        cout << "Enter car make: ";
        cin >> make;
        cout << "Enter car color: ";
        cin >> color;
        cout << "Enter car cost: ";
        cin >> cost;
        cout << "Enter car age (years): ";
        cin >> age;
    }

    void display() const {
        cout << "\nCar Details:\n";
        cout << "Make  : " << make << endl;
        cout << "Color : " << color << endl;
        cout << "Cost  : " << cost << endl;
        cout << "Age   : " << age << " years" << endl;

        if (IsOld())
            cout << "Status: This car is OLD.\n";
        else
            cout << "Status: This car is NOT OLD.\n";
    }
};

int main() {
    Car c1;
    c1.readData();
    c1.display();
    return 0;
}

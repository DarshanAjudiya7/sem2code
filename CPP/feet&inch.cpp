#include <iostream>
using namespace std;

class DB {
    int feet;
    float inches;

public:
    void read() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
        normalize();
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    DB add(DB d) {
        DB temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        temp.normalize();
        return temp;
    }

    DB addConstant(float val) {
        DB temp;
        temp.feet = feet;
        temp.inches = inches + val;
        temp.normalize();
        return temp;
    }

    void normalize() {
        while (inches >= 12) {
            inches -= 12;
            feet++;
        }
    }
};

int main() {
    DB d1, d2, d3;
    cout << "Enter first distance:\n";
    d1.read();
    cout << "Enter second distance:\n";
    d2.read();

    d3 = d1.add(d2);
    cout << "\nSum of two distances: ";
    d3.display();

    float val;
    cout << "\nEnter inches to add to first distance: ";
    cin >> val;
    d3 = d1.addConstant(val);
    cout << "After adding constant value: ";
    d3.display();

    return 0;
}

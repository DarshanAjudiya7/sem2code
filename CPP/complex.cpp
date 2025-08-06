#include <iostream>
using namespace std;

class complex {
    int r, i;
public:
    complex(int a, int b) {
        r = a;
        i = b;
    }

    complex() {
        r = 0;
        i = 0;
    }

    complex add1complex(complex);
    complex addcomplex(complex, complex);
    void display();
};

int main() {
    complex c1(2, 4), c2(3, 6), c3, c4;
    c3 = c1.add1complex(c2);
    c4.addcomplex(c1, c2);
    c3.display();
    c4.display();
}

complex complex::add1complex(complex obj) {
    complex temp;
    temp.r = r + obj.r;
    temp.i = i + obj.i;
    return temp;
}
    
complex complex::addcomplex(complex o1, complex o2) {
    r = o1.r + o2.r;
    i = o1.i + o2.i;
    return *this;
}

void complex::display() {
    cout << r << "+" << i << "i" << endl;
}

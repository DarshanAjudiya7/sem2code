#include <iostream>
using namespace std;

class time1 {
    int hour, min, second;
public:
    time1(int a, int b, int c) {
        hour = a;
        min = b;
        second = c;
    }

    time1() {
        hour = 0;
        min = 0;
        second = 0;
    }

    void addt2(time1 o1, time1 o2);
    void display();
};

void time1::addt2(time1 o1, time1 o2) {
    second = o1.second + o2.second;
    min = o1.min + o2.min + second / 60;
    second %= 60;
    hour = o1.hour + o2.hour + min / 60;
    min %= 60;
}

void time1::display() {
    cout << hour << ":" << min << ":" << second << endl;
}

int main() {
    time1 t1(2, 48, 54), t2(6, 22, 34), t3;
    t3.addt2(t1, t2);
    t3.display();
}

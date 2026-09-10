// friend class
#include <iostream>
using namespace std;

class Box {
    private:
        float length, width, height;
    public:
        void input() {
            cout << "Enter length, width, height= ";
            cin >> length >> width >> height;
        }
        friend class Printer; // gives ENTIRE Printer class access
};

class Printer {
    public:
        void BoxDetails(Box b) {
            // can access Box's private members directly, because Printer is a friend
            cout << "Length= " << b.length << "  Width= " << b.width 
                 << "  Height= " << b.height << endl;
        }
};

int main() {
    Box b;
    b.input();

    Printer p;
    p.BoxDetails(b);

    return 0;
}


// friend function
#include <iostream>
using namespace std;

class Square; // forward declaration, since Rectangle needs to know Square exists

class Rectangle {
    private:
        float length, width;
    public:
        void input() {
            cout << "Enter length and width (rectangle)= ";
            cin >> length >> width;
        }
        friend float area(Rectangle r, Square s); // friend of Rectangle
void area_rect(){
	cout<<"AREA OF RECTANGLE="<<length*width<<endl;
}};

class Square {
    private:
        float side;
    public:
        void input() {
            cout << "Enter side of square= ";
            cin >> side;
        }
        friend float area(Rectangle r, Square s); // friend of Square too
void area_squa(){
	cout<<"AREA OF SQUARE="<<side*side<<endl;
}};

// definition — no class name prefix, not a member function
float area(Rectangle r, Square s) {
    return (r.length * r.width) + (s.side * s.side);
}

int main() {
    Rectangle r;
    Square s;
    r.input();
    s.input();
    r.area_rect();
    s.area_squa();
    cout << "Total Area = " << area(r, s) << endl;
    return 0;
}
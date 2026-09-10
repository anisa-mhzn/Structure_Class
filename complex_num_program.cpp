#include <iostream>
using namespace std;

class Complex{
    private:
    int real, imag;   // just two numbers stored together

    public:
    void input(){
        cout<<"Enter real and imaginary numbers: ";
        cin>>real>>imag;
    }

    // takes ANOTHER Complex object as input
    // returns a NEW Complex object as output
    Complex add(Complex c){
        Complex temp;
        temp.real = real + c.real;   // add the first numbers
        temp.imag = imag + c.imag;   // add the second numbers
        return temp;
    }

    void display(){
        cout<<real<<"(real)"<<" "<<imag<<"(imaginary)"<<endl;
    }
};

int main(){
    Complex c1, c2, c3;
    c1.input();
    c2.input();

    c3 = c1.add(c2);   // c1's numbers + c2's numbers, result stored in c3

    cout<<"Result: ";
    c3.display();

    return 0;
}
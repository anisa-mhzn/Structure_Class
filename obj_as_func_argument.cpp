// object as function argument
#include <iostream>
using namespace std;
class Distance{
    private:
    int feet, inches;
    
    public:
    void input(){
        cout<<"Enter Feet and Inches"<<endl;
        cin>>feet>>inches;
    }
    void byValue(Distance d){
        d.feet=2;
        d.inches=5;
        d.display();
    }
    void byRefrence(Distance &d){
        d.feet=5;
        d.inches=2;
        d.display();
    }
    void display (){
        cout<<"Distance= "<<feet<<"feet"<<inches<<"inches"<<endl;
    }
};
int main(){
    Distance d;
    d.input();
    cout<<"(Pass by Value)";
    d.byValue(d);
    cout<<"Original after pass by value ";
    d.display();
    cout<<endl;
    cout<<"(Pass by Reference)";
    d.byRefrence(d);
    cout<<"Original after pass by refrence ";
    d.display();
    return 0;
}

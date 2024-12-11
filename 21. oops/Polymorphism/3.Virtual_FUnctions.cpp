#include "bits/stdc++.h"
using namespace std;

class Base{
    public:
        virtual void print (){
            cout << "This is the base class's print function " << endl;
        }
        void display (){
            cout << "This is the base class's display function " << endl;
        }
};

class derived : public Base{
    public:
        void print (){
            cout << "This is the derived class's print function " << endl;
        }
        void display (){
            cout << "This is the derived class's display function " << endl;
        } 
};

int main (){
    Base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();

    baseptr -> display();
    return 0;
}
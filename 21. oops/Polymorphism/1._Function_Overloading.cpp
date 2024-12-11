#include "bits/stdc++.h"
using namespace std;

// Functipn Overloading

class ApnaCollege{
    public:
        void fun(){
            cout<< "I am a fucntion with no arguments" << endl;
        }
        void fun(int x){
            cout<< "I am a fucntion with int arguments" << endl;
        }
        void fun(double x){
            cout<< "I am a fucntion with double arguments" << endl;
        }
};

int main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.7);
    return 0;

}
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int m =n-1;
    if((n & m) ==0 && n!=0){
        cout << "NUmber is power of 2"<< endl;
    }
    else{
        cout << "not a pow of 2"<< endl;
    }
    return 0;
}
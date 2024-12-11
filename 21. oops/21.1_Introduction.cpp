#include<iostream>
using namespace std;

class student
{
    string name;

    public:

        int age;
        bool gender;

        student(){
            cout << "Default Constructor"<< endl;
          // Default Constructor
        }
        student(string s, int a, bool g){
            cout << "Parametrised Constructor"<< endl;
            name =s;
            age =a;
            gender =g;
        } // Parameterised Constructor

        student (student &a){
            cout << "Copy Constructor" << endl;
            name = a.name;
            age = a.age;
            gender = a.gender;

        }  // Copy Constructor

        bool operator == (student &a){
            if(name == a.name && age == a.age && gender == a.gender){
                return true;
            }
            return false;
        }

        ~student(){
            cout << "Destructor called"<< endl;

        }

        void setName(string s){
            name =s;
        }

        void getName(){
            cout << name<< endl;
        }

        void printInfo(){
            cout << "Name = ";
            cout << name << endl;
            cout << "Age = ";
            cout << age << endl;
            cout << "Gender = ";
            cout << gender << endl;
        }

};

int main(){

    /* student arr[3];
    for(int i=0; i<3; i++){
        string s;
        cout << "Name = ";
        cin >> s;
        arr[i].setName(s);
        cout << "Age = ";
        cin >> arr[i].age;
        cout << "Gender = ";
        cin>> arr[i].gender;   
    }   */

    student a("Urvi", 20,1);
    // a.printInfo();
    student b("Rahul", 21,0);
    student c=a;

    if(b==a){
        cout << "Same" << endl;
    }
    else{
        cout << "Not Same" << endl;
    }

    return 0;

}
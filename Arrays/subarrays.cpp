#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subs (string s , string ans ){
    if (s.length() ==0){
        cout << ans << endl;
        return ;
    }
    char a = s[0];
    std :: string ros =  s.substr(1);
    subs(ros, ans);
    subs(ros, ans + a);
    

}

int main (){
    string sub = "ABC";
    subs (sub, "");
    cout << endl;
    return 0;
}
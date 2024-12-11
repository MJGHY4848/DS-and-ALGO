#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[102]="apple";
    char a[100];
    cin >> a;
    cout << a<< endl;
    cout << arr[2];
    int i=0;
    while(arr[i]!='\0'){
        cout << arr[i]<< endl;
        i++;
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n , mx =2;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int pd = a[1] - a[0];
    int j=2;
    int curr = 2;
    while (j<n){
        if(pd == a[j]- a[j-1]){
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
            curr = 2;
        }
        mx = max(mx, curr);
        j++;
    }

    cout << mx;
    return 0;

}
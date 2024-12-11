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
    for (int i=0; i<(n-1); i++){
        int count=1;
        int diff = a[i+1]-a[i];
        for(int j=i+1; j<n; j++){
            if(diff !=(a[j]-a[j-1] )){
                break;
            }
            if(diff==(a[j]-a[j-1] )){
                count++;
            }
            
        }
        mx = max(mx,count);
    }
    cout << mx;
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n , ans =0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int mx = a[0];
    if (a[1]<a[0]){
        cout << 0 << "  " << a[0] << endl;
        ans++;
    }
    int j = 1;
    while(j<n){
        if(j == n-1){
            if(a[j]> mx){
                cout << j << "  " << a[j]<< endl;
                ans++;
            }
        }
        if(a[j]> mx){
            mx = a[j];
            if(a[j]> a[j+1]){
                cout << j << "  " << a[j]<< endl;
                ans ++;
            }
        }
        j++;
    }

    cout << ans;
    return 0;


}
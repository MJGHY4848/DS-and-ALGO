#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n ;
    cin >> n;
    int a[n], ans[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int s, total=0; 
    cin >> s;
    int i=0, j=0, k=0, l=0;
    while(j<n && total != s){
        while((total + a[j]) > s){
            total -= a[i];
            i++;
            l++;
        }
        total += a[j];
        ans [k] = a[j];
        k++;
        j++;
    }

    if(total!=s){
        cout << "-1" << endl;
    }
    else{
        for(int m=l; m<k; m++){
            cout << ans[m] << "  " << m << endl;

        }
    }
    return 0;

}
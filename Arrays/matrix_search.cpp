#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n>> m;
    int target; cin >> target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }
    int r=0,c=m-1;
    bool flag=false;
    while(r<n and c>=0 and flag==false){
        if(mat[r][c]== target){
            flag = true;
        }
        else if (mat[r][c]> target){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag){
        cout << "ELement found";
    }
}
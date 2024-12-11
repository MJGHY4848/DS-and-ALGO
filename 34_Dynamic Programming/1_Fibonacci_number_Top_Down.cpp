#include"bits/stdc++.h"
#include<algorithm>
#include<string>
using namespace std;

// define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i =a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e3+2, MOD = 1e9+7;

int dp[N];

int fib(int n){
    if(n==0 or n==1){
        return n;
    }
    if(n==2){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }
    dp[n]= fib(n-1)+fib(n-2);
    return dp[n];
}

signed main(){
    int n;
    cin >>n;

    rep(i,0,N){
        dp[i]= -1;
    }

    cout << fib(n)<< endl;
    return 0;
}
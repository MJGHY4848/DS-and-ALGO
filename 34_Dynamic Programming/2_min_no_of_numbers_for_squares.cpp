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

const int N = 1e5+2, MOD = 1e9+7;

int dp[N];

int MinSquare(int n){
    if(n==0 || n==1 || n==3 || n==2){
        return n;
    }

    if(dp[n]!= MOD){
        return dp[n];
    }

    int ans = MOD;
    for(int i=1; i*i <=n; i++){
        dp[n] = min(dp[n], 1+ MinSquare(n-i*i));
    }
    return dp[n];
}

signed main(){
    int n;
    cin >> n;
    rep(i,0,N){
        dp[i] = MOD;
    }

    cout << MinSquare(n) << endl;
    return 0;
}
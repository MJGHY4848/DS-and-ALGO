#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>> n>>k;
    vector<int> a(n);
    for(auto &i: a)
        cin>> i;

    deque<int> q;
    vector<int> ans;
    for(int i =0; i<k; i++){
        while(!q.empty() and q.back() < a[i]){
            cout<< a[i]<< endl;
            cout<< q.back()<< endl;
            cout<< a[q.back()] << endl;
            q.pop_back();
        }
        q.push_back(i);
    }

    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

const int N = 1e5+2;
vector<int> adj[N];
bool vis[N];

int main(){
    int n,m;
    for (int i=0; i<N; i++){
        vis[i]=0;
    }
    cin >> n >> m;
    int x , y;
    for (int i=0; i<m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    queue<int> q;
    q.push(1);
    vis[1] = true;
    while (!q.empty()){
        int node = q.front();
        q.pop();
        cout << node;
        vector<int> :: iterator it;
        for(it = adj[node].begin(); it != adj[node].end(); it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }
    }
    return 0;
}
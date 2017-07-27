// problem link : https://www.hackerrank.com/challenges/bfsshortreach/problem

#include <bits/stdc++.h>
using namespace std;


int main() {
    int tc,n,m,x,y,s; cin>>tc;
    while(tc--){
        cin>>n>>m;
        vector<int> adjList[n+2];
        while(m--){
            cin>>x>>y;
            adjList[x].push_back(y);
            adjList[y].push_back(x);
        }
        cin>>s;
        queue<int> q;
        int lvl[n+2];
        memset(lvl, -1, sizeof lvl);
        lvl[s] = 0;
        q.push(s);
        while(!q.empty()){
            int par = q.front();
            q.pop();
            for(int ch : adjList[par]) if(lvl[ch] == -1){
                q.push(ch);
                lvl[ch] = lvl[par] + 1;
            }
        }
        for(int i=1; i<=n; i++){
            if(i == s) continue;
            if(lvl[i] == -1)
                cout<<"-1 ";
            else
                cout<<lvl[i] * 6<<" ";
        }
        cout<<endl;
    }
    return 0;
}

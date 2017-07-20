/*
 - problem link : https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, x, y; cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int> g[n+2];
        int lvl[n+2];
        memset(lvl, -1, sizeof lvl);
        while(m--){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        //bfs
        queue<int> q;
        q.push(1);
        lvl[1] = 0;
        while(!q.empty()){
            int par = q.front();
            q.pop();
            for(int child : g[par]) if(lvl[child] == -1) {
                q.push(child);
                lvl[child] = lvl[par] + 1;
            }
        }
        cout<<lvl[n]<<endl;
    }
    return 0;
}

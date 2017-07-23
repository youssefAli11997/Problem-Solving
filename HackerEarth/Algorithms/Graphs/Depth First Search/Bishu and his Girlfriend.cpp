/*
 - problem link : https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int n, x, y, q, min_id = 1005, min_dist = 1005;
bool isGirl[1005], vis[1005];
vector<int> adjList[1005];

void dfs(int par, int dist){
    vis[par] = true;
    if(isGirl[par] && (min_dist > dist || (min_dist == dist && min_id > par))){
        min_dist = dist;
        min_id = par;
    }
    for(int ch : adjList[par]) if(!vis[ch]){
        dfs(ch, dist+1);
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>x>>y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    /*for(int i=1; i<=n; i++){
        cout<<i<<": ";
        for(int node : adjList[i])
            cout<<node<<" ";
        cout<<endl;
    }*/
    cin>>q;
    while(q--){
        cin>>x;
        isGirl[x] = true;
    }
    dfs(1, 0);
    cout<<min_id<<endl;
    return 0;
}

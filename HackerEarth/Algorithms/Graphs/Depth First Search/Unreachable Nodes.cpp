/*
 - A test-your-understanding problem
 - tutorial link : https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, x, cnt = 1;
vector<int> g[100005];
bool  visited[100005];

void dfs(int node){
    visited[node] = true;
    for(int child : g[node]) if(!visited[child]){
        cnt++;
        dfs(child);
    }
}

int main(){
    cin>> n >> m;
    while(m--){
        cin>> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cin>> x;
    dfs(x);
    cout<< n - cnt << endl;
    return 0;
}

/*
 - A test-your-understanding problem
 - tutorial link : https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int n, x, a, b, ans, level[100002];
vector<int> adjList[100002];
queue<int> q;

void bfs(int source) {
    q.push(source);
    level[source] = 1;
    while(!q.empty()) {
        int par = q.front();
        q.pop();
        for(int child : adjList[par]) if(level[child] == -1) {
            q.push(child);
            level[child] = level[par] + 1;
            if(level[child] == x) ans++;
            if(level[child] > x) return;
        }
    }
}

int main() {
    cin>>n;
    memset(level, -1, sizeof level);
    for(int i=0; i<n-1; i++) {
        cin>>a>>b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    cin>>x;
    bfs(1);
    cout<<ans<<endl;
    return 0;
}


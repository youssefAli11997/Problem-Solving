// problem link : http://abc068.contest.atcoder.jp/tasks/arc079_a

#include <bits/stdc++.h>
using namespace std;
int main(){

  int n,m; cin>>n>>m;
  vector<int> g[n];
  for(int i=0; i<m; i++){
    int x,y; cin>>x>>y;
    g[x-1].push_back(y-1);
    g[y-1].push_back(x-1);
  }
  for(int i=0; i<g[0].size(); i++){
    for(int j=0; j<g[g[0][i]].size(); j++){
      if(g[g[0][i]][j] == n-1){cout<<"POSSIBLE"; return 0;}	
    }
  } 
  cout<<"IMPOSSIBLE"; return 0;
}

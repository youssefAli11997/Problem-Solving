#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,y,mx=-1,mxI=0; cin>>n>>m;
    int col[n+2] = {(int)1e6}, f[(int)1e5+2] = {0};
    for(int i=1; i<=n; i++) cin>>col[i], f[col[i]]++;
    set<int> adj[(int)1e5+2];
    for(int i=0; i<m; i++){
        cin>>x>>y;
        if(col[x] != col[y]){
            adj[col[x]].insert(col[y]);
            adj[col[y]].insert(col[x]);
        }
    }
    for(int i=(int)1e5; i>=1; i--){
        if(!f[i]) continue;
        int sz = adj[i].size();
        if(sz >= mx){
            mx = sz;
            mxI = i;
        }
    }
    cout<<mxI<<endl;
    return 0;
}

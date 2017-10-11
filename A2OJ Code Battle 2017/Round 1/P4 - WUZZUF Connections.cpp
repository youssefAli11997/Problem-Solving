// problem link : https://a2oj.com/p?ID=481
#include<bits/stdc++.h>
using namespace std;

#define solved first
#define timeP second.first
#define id second.second

bool comp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b){
    if(a.solved == b.solved){
        if(a.timeP == b.timeP){
            return a.id < b.id;
        }
        return a.timeP < b.timeP;
    }
    return a.solved > b.solved;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        bool blocked[n];int x,y;
        blocked[0] = 0;
        vector<int> con[n];
        for(int i=1; i<n; i++)
            cin>>blocked[i];
        for(int i=0; i<m; i++){
            cin>>x>>y;
            if(blocked[x] || blocked[y])
                continue;
            con[x].push_back(y);
            con[y].push_back(x);
        }
        
        /*for(int i=0; i<n; i++){
            cout<<i<<" : ";
            for(int c : con[i])
                cout<<c<<" ";
            cout<<endl;
        }*/
        
        //bfs
        queue<int> q;
        int dist[n];
        memset(dist, -1, sizeof dist);
        dist[0] = 0;
        q.push(0);
        while(!q.empty()){
            int p = q.front(); q.pop();
            for(int c=0; c<con[p].size(); c++) if(dist[con[p][c]] == -1){
                q.push(con[p][c]);
                dist[con[p][c]] = dist[p] + 1;
            }
        }
        for(int i=1; i<n; i++){
            cout<<dist[i];
            if(i<n-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

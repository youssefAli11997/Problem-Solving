#include <bits/stdc++.h>
using namespace std;

int n,m;
char g[102][102], c;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
set<int> s;
bool valid(int i, int j){
    return i>=0 && i<n && j>=0 && j<m && g[i][j] != c && g[i][j] != '.';
}

int main(){
    cin>>n>>m>>c;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>g[i][j];
            
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) if(g[i][j] == c){
            for(int k=0; k<4; k++) if(valid(i+dx[k],j+dy[k]))
                s.insert(g[i+dx[k]][j+dy[k]]);
        }
        
    cout<<s.size()<<endl;
    return 0;
}

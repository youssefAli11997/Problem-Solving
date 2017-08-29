// Flood Fill
// A test-your-understanding problem
// tutorial link : https://www.hackerearth.com/practice/algorithms/graphs/flood-fill-algorithm/tutorial/
#include <iostream>
using namespace std;

int n,m,a[12][12];
bool sol,vis[12][12];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
string ans[] = {"No","Yes"};

bool valid(int i, int j){
    return i>=0 && i<n && j>=0 && j<m && a[i][j] == 1 && !vis[i][j];
}

void dfs(int i, int j){
    vis[i][j] = true;
    if(i==n-1 && j==m-1){
        sol = true;
        return;
    }
    for(int k=0; k<4; k++) if(valid(i+dx[k],j+dy[k]))
        dfs(i+dx[k],j+dy[k]);
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>a[i][j];
    dfs(0,0);
    cout<<ans[sol]<<endl;
    return 0;
}

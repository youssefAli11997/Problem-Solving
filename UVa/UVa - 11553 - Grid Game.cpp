#include <bits/stdc++.h>
using namespace std;

int t, n, m[10][10], mn;
bool c[10];

void solve(int row, int sum){
    if(row == n){
        mn = min(sum, mn);
        return;
    }
    for(int col = 0; col < n; col++){
        if(c[col]) continue;
        c[col] = 1;
        solve(row + 1, sum + m[row][col]);
        c[col] = 0;
    }
}

int main(){
    cin>>t;
    while(t--){
        mn = 100000;
        cin>>n;
        for(int i=0; i<n; i++) for(int j=0; j<n; j++){
            cin>>m[i][j];
        }
        solve(0,0);
        cout<<mn<<endl;
    }
    return 0;
}

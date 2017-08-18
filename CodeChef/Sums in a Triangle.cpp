// link : https://www.codechef.com/problems/SUMTRIAN
#include <bits/stdc++.h>
using namespace std;

int t, n, g[102][102], mem[102][102], mx,  sum;

int solve(int i, int j){
    if(i == n){
        return 0;
    }
    if(mem[i][j] != -1) return mem[i][j];
    return mem[i][j] = g[i][j] + max(solve(i+1, j), solve(i+1, j+1));
}

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) for(int j=0; j<i+1; j++)
            cin>>g[i][j];
        memset(mem, -1, sizeof mem);
        cout<<solve(0,0)<<endl;
    }
    return 0;
}

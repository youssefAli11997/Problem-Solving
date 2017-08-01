// problem link : http://poj.org/problem?id=1163

#include <cstring>
#include <iostream>
#include <cmath>
#define MAX 102
using namespace std;

int n, tri[MAX][2*MAX-1], dp[MAX][2*MAX-1];

bool valid(int i, int j){return i>=0 && i<n && j>=0 && j<2*n-1;}

int solve(int i, int j){
    if(!valid(i,j) || tri[i][j] == -1) return 0;
    if(i == n-1) return tri[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = tri[i][j] + max(solve(i+1, j+1), solve(i+1, j-1));
}

int main(){
    cin>>n;
    memset(tri, -1, sizeof tri);
    memset(dp, -1, sizeof dp);
    for(int i=0; i<n; i++){
        for(int j=n-1-i, cnt=0; j<2*n-1 && cnt < i+1; j+=2, cnt++){
            cin>>tri[i][j];
        }
    }
    cout<<solve(0, n-1)<<endl;
    return 0;
}

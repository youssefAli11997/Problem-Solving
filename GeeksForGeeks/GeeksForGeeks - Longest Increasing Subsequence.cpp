#include <iostream>
#include <cstring>
using namespace std;

int dp[1004][304],n,t,a[1004];

int solve(int ind,int last){
    if(ind==n)return 0;
    if(dp[ind][last]!=-1 &&last!=-1)return dp[ind][last];
    if(a[ind]>last)return dp[ind][last] = max(1+solve(ind+1,a[ind]),solve(ind+1,last));
    else return dp[ind][last] = solve(ind+1,last);
}

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)cin>>a[i];
        memset(dp,-1,sizeof dp);
        cout<<solve(0,-1)<<endl;
    }
    return 0;
}

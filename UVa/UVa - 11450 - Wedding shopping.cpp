#include <bits/stdc++.h>
using namespace std;

int tc,m,c,prices[25][25],dp[205][25];

int solve(int money, int g){
    if(money < 0) return INT_MIN;
    if(g == c) return m - money;
    if(dp[money][g] != -1) return dp[money][g];
    int ans = -1;
    for(int i = 1; i<=prices[g][0]; i++)
        ans = max(ans, solve(money - prices[g][i], g+1));
    return dp[money][g] = ans;
}

int main(){
    //freopen("in.txt","rt",stdin);
    //freopen("out.txt","wt",stdout);
    cin>>tc;
    while(tc--){
        cin>>m>>c;
        for(int i=0; i<c; i++){
            cin>>prices[i][0];
            for(int j=1; j<=prices[i][0]; j++)
                cin>>prices[i][j];
        }
        memset(dp, -1, sizeof dp);
        int ans = solve(m, 0);
        cout<<"b "<<ans<<endl;
        if(ans < 0)
            cout<<"no solution\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}

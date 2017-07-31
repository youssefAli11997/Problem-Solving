// problem link : https://www.urionlinejudge.com.br/judge/en/problems/view/2532
// solution by : Youssef_Ali
// uri profile : https://www.urionlinejudge.com.br/judge/en/profile/122421

#include <bits/stdc++.h>
using namespace std;

int n,po, mx = 10000000, dp[2005][1005];
pair<int,int> s[1005];

int solve(int p, int idx){
    if(p <= 0) return 0;
    if(idx == n) return 10000000;
    if(dp[p][idx] != -1) return dp[p][idx];
    return dp[p][idx] = min(s[idx].second + solve(p - s[idx].first, idx + 1), solve(p, idx + 1));
}

int main(){
    while(cin>>n>>po){
        memset(dp, -1, sizeof dp);
        
        for(int i=0; i<n; i++)
            cin>>s[i].first>>s[i].second;
        
        int ans = solve(po, 0);
        if(ans != mx) cout<<ans<<endl;
        else cout<<"-1\n";
    }
    return 0;
}

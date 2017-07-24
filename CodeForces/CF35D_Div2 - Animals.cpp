#include <bits/stdc++.h>
using namespace std;

int n,x,c[302],dp[10002][102];

int solve(int quan, int idx){
  if(quan < 0) return -1;
  if(quan == 0 || idx == n) return 0;
  if(dp[quan][idx] != -1) return dp[quan][idx];
  return dp[quan][idx] = max(solve(quan - (n-idx)*c[idx], idx+1)+1,solve(quan, idx+1));
}

int main(){
  freopen("input.txt","rt",stdin);
  freopen("output.txt","wt",stdout);
  cin>>n>>x;
  for(int i=0; i<n; i++) cin>>c[i];
  memset(dp, -1, sizeof dp);
  cout<<solve(x, 0);
	return 0;
}

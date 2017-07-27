// problem link : http://abc067.contest.atcoder.jp/tasks/abc067_b

#include <bits/stdc++.h>
using namespace std;
int n,k,arr[55],dp[55][55],sum;
int solve(int index, int count){
  if(count > k) return INT_MIN;
  if(index == n || count == k) return 0;
  if(dp[index][count] != -1) return dp[index][count];
  return dp[index][count] = max(arr[index]+solve(index+1,count+1),solve(index+1,count));
}
int main(){
  cin>>n>>k;
  for(int i=0; i<n; i++) cin>>arr[i];
  memset(dp, -1, sizeof dp);
  cout<<solve(0,0)<<endl;
}

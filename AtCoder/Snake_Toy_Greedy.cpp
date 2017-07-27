// problem link : http://abc067.contest.atcoder.jp/tasks/abc067_b

#include <bits/stdc++.h>
using namespace std;
int n,k,arr[55],sum;
int main(){
  cin>>n>>k;
  for(int i=0; i<n; i++) cin>>arr[i];
  sort(arr, arr+n);
  for(int i=0; i<k; i++) sum += arr[n-1-i];
  cout<<sum<<endl;
}

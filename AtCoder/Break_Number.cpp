// problem link : http://abc068.contest.atcoder.jp/tasks/abc068_b

#include <bits/stdc++.h>
using namespace std;
int main(){

  int n, mx = -1, ans; cin>>n;
  for(int i=1; i<=n; i++){
    int cnt = 0, tmp = i;
    while(tmp > 1 && tmp % 2 == 0)
      tmp /= 2, cnt++;
    if(mx < cnt){mx = cnt; ans = i;}
  }
  cout<<ans<<endl;
}

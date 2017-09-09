// link : http://abc073.contest.atcoder.jp/tasks/abc073_b
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y; cin>>n;
    long long ans = 0;
    while(n--){
        cin>>x>>y;
        ans += abs(y-x)+1;
    }
    cout<<ans<<endl;
    return 0;
}

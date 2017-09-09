// link : http://abc073.contest.atcoder.jp/tasks/abc073_c
#include <bits/stdc++.h>
using namespace std;

map<int, bool> mp;

int main(){
    int n,a, ans=0; cin>>n;

    while(n--){
        cin>>a;
        if(mp[a] == 0){
            mp[a] = 1;
            ans++;
        }else{
            mp[a] = 0;
            ans--;
        }
    }
    cout<<ans<<endl;
    return 0;
}

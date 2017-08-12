// link : http://abc070.contest.atcoder.jp/tasks/abc070_a
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    for(int i=0,j=s.size()-1; i<j; i++, j--) if(s[i] != s[j]){
        cout<<"No\n";
        return 0;
    }
    cout<<"Yes\n";
    return 0;
}

// link : http://abc073.contest.atcoder.jp/tasks/abc073_a
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    while(n){
        if(n % 10 == 9){
            cout<<"Yes\n";
            return 0;
        }
        n /= 10;
    }
    cout<<"No\n";
    return 0;
}

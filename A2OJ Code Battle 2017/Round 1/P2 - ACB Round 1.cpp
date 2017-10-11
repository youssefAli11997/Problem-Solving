// problem link : https://a2oj.com/p?ID=479

#include<bits/stdc++.h>
using namespace std;

#define name first
#define points second

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a[n],ans=0;
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        reverse(a,a+n);
        for(int i=0; i<m; i++){
            if(a[i] > 0)
                ans++;
        }
        for(int i=m; i<n; i++) if(a[i] == a[m-1] && a[i] > 0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}

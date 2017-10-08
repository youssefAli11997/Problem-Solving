#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string dir; cin>>dir;
    int x[n], ans = 2000000000;
    for(int i=0; i<n; i++)cin>>x[i];
    for(int i=0; i<n-1; i++){
        if(dir[i]=='R' && dir[i+1]=='L')
            ans = min(ans, x[i+1]-x[i]);
    }
    if(ans == 2000000000)
        cout<<"-1";
    else
        cout<<ans/2;
    return 0;
}

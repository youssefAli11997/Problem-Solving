#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    long long a[n],b[n],a_or,b_or, mx = -1;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    for(int i=0; i<n; i++){
        a_or = b_or = 0;
        for(int j=i; j<n; j++){
            a_or |= a[j];
            b_or |= b[j];
            //cout<<i<<" "<<j<<" "<<mx<<" "<<a_or<<" "<<b_or<<endl;
            mx = max(mx, a_or+b_or);
            
        }
    }
    cout<<mx<<endl;
    return 0;
}

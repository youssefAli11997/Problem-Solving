#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[2*n];
    for(int i=0; i<2*n; i++) cin>>a[i];
    sort(a, a+2*n);
    for(int i=0; i<n; i++) for(int j=n; j<2*n; j++) if(a[i] == a[j]){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    return 0;
}

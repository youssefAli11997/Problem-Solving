#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,m; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr + n);
    cin>>q;
    while(q--){
        cin>>m;
        cout<< upper_bound(arr, arr + n, m) - arr <<endl;
    }
    return 0;
}

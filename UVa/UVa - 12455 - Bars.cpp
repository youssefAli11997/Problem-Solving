#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,p,sum; cin>>n>>p;
        int a[p];
        bool sol = false;
        for(int i=0; i<p; i++) cin>>a[i];
        for(int i=0; i<(1<<p) && !sol; i++){
            sum = 0;
            for(int j=0; j<p; j++){
                if((1<<j) & i)
                    sum += a[j];
                if(sum > n) // prune
                    break;
            }
            if(sum == n){
                cout<<"YES\n";
                sol = true;
            }
        }
        if(!sol)
            cout<<"NO\n";
    }
    return 0;
}

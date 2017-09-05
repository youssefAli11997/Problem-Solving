#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a[10005];
    while(true){
        cin>>n;
        if(!n) break;
        for(int i=0; i<n; i++) cin>>a[i];
        int mx = 0, mxSoFar = 0;
        for(int i=0; i<n; i++){
            mxSoFar += a[i];
            if(mxSoFar < 0) mxSoFar = 0;
            mx = max(mx, mxSoFar);
        }
        if(mx > 0)
            cout<<"The maximum winning streak is "<<mx<<".\n";
        else
            cout<<"Losing streak.\n";
    }
    return 0;
}

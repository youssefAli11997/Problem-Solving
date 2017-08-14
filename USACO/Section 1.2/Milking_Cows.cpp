/*
ID: youssef24
PROG: milk2
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("milk2.in", "rt", stdin);
    freopen("milk2.out", "wt", stdout);
    int n; cin>>n;
    int b[n], e[n];
    for(int i=0; i<n; i++) cin>>b[i]>>e[i];
    int begin = *min_element(b, b + n);
    int end = *max_element(e, e + n);
    int cnt[end+1] = {0};
    for(int i=0; i<n; i++){
        for(int j=b[i]; j<e[i]; j++)
            cnt[j]++;
    }
    int mx = -1, mn = -1, currMx, currMn;
    for(int i=begin; i<end;){
        int j = i;
        currMx = 0;
        currMn = 0;
        if(cnt[i]) for(; cnt[j] && j < end; j++){
            currMx++;
        }
        i = j;
        mx = max(currMx, mx);
        
        if(!cnt[i]) for(; !cnt[j] && j < end; j++){
            currMn++;
        }
        i = j;
        mn = max(currMn, mn);
    }
    cout<<mx<<" "<<mn<<endl;
    return 0;
}

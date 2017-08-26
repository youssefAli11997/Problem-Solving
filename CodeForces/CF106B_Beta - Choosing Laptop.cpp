#include <bits/stdc++.h>
#define s first.first
#define r first.second
#define d second.first
#define c second.second
using namespace std;

bool comp(pair<pair<int,int>,pair<int,int>> a, pair<pair<int,int>,pair<int,int>> b){
    return a.c > b.c;
}

int main(){
    int n,minIdx; cin>>n;
    pair<pair<int,int>,pair<int,int>> a[n]; bool notUsed[n] = {0};
    for(int i=0; i<n; i++) cin>>a[i].s>>a[i].r>>a[i].d>>a[i].c;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            if(a[i].s<a[j].s && a[i].r<a[j].r && a[i].d<a[j].d){
                notUsed[i] = true;
                break;
            }
        if(!notUsed[i]) minIdx = i;
    }
    for(int i=0; i<n; i++) if(!notUsed[i]){
        if(comp(a[minIdx], a[i]))
            minIdx = i;
    }
    cout<<minIdx + 1<<endl;
    return 0;
}

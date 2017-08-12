#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
    if(a.f == b.f)
        return a.s > b.s;
    return a.f < b.f;
}

int main(){
    int n,k, ans = 0; cin>>n>>k;
    pair<int,int> pt[n];
    for(int i=0; i<n; i++) cin>>pt[i].f>>pt[i].s;
    sort(pt, pt+n, comp); // increasing
    pair<int, int> kth = pt[n-k];
    for(int i=0; i<n; i++) if(pt[i].f == kth.f && pt[i].s == kth.s){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}

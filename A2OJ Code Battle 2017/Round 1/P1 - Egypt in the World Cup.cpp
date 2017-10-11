// problem link : https://a2oj.com/p?ID=478
#include<bits/stdc++.h>
using namespace std;

#define name first
#define points second

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        pair<int, string> teams[n];
        string team; int points;
        for(int i=0; i<n; i++){
            cin>>team>>points;
            teams[i] = make_pair(points,team);
        }
        sort(teams, teams+n);
        cout<<teams[n-1].second<<endl;
    }
    return 0;
}

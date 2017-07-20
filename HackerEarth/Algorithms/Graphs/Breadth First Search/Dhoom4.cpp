/*
 - problem link : https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/dhoom-4/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int sv, lv, n; cin>>sv>>lv>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    
    // bfs
    int ans[100005];
    memset(ans, -1, sizeof ans);
    queue<int> q;
    q.push(sv);
    ans[sv] = 0;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        if(par == lv) break;
        for(int i=0; i<n; i++){
            int val = ( par * (ll)arr[i] ) % 100000;
            if(ans[val] == -1){
                ans[val] = ans[par] + 1;
                q.push(val);
            }
        }
    }
    cout<<ans[lv]<<endl;
    return 0;
}

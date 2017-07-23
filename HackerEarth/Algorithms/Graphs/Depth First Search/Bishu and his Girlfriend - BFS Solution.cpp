/*
 - problem link : https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int n, x, y, qu, min_id = 1005, min_dist = 1005, lvl[1005];
bool isGirl[1005];
vector<int> adjList[1005];
queue<int> q;

int main(){
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>x>>y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    
    cin>>qu;
    while(qu--){
        cin>>x;
        isGirl[x] = true;
    }
    memset(lvl, -1, sizeof lvl);
    q.push(1);
    lvl[1] = 0;
    
    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(int ch : adjList[par]) {
            if(lvl[ch] == -1) q.push(ch);
            lvl[ch] = lvl[par] + 1;
            if(isGirl[ch] && (min_dist > lvl[ch] || (min_dist == lvl[ch] && min_id > ch))){
                min_dist = lvl[ch];
                min_id = ch;
            }
        }
    }
    
    cout<<min_id<<endl;
    return 0;
}

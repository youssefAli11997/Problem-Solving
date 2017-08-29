#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> adj;
map<string, bool> vis;
int n,mx_lvl;
string x,r,y;

string toLower(string s){
    string res = "";
    for(int i=0; i<s.size(); i++)
        res += tolower(s[i]);
    return res;
}

void dfs(string node, int lvl){
    vis[node] = true;
    mx_lvl = max(mx_lvl, lvl);
    for(string child : adj[node])
        if(!vis[child])
            dfs(child, lvl+1);
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>r>>y;
        x = toLower(x);
        y = toLower(y);
        adj[y].push_back(x);
        vis[x] = vis[y] = false;
    }
    dfs("polycarp", 1);
    cout<<mx_lvl<<endl;
    return 0;
}

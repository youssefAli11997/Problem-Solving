#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, w, p[2] = {"",""}; int x = 0; cin>>s>>w;
    for(int i=0; i<s.size(); i++){
        if(s[i] != '|')
            p[x] += s[i];
        else
            x++;
    }
    if(p[0].size() == p[1].size() && w.size() % 2 != 0)
        {cout<<"Impossible\n"; return 0;}
    while(p[0].size() < p[1].size() && w.size()){
        p[0] += w[0];
        w = string(w.begin()+1, w.end());
    }
    while(p[1].size() < p[0].size() && w.size()){
        p[1] += w[0];
        w = string(w.begin()+1, w.end());
    }
    if((w.size() % 2) || (p[0].size() != p[1].size())) cout<<"Impossible\n";
    else{
        p[0] += w.substr(0, w.size()/2);
        w = string(w.begin()+w.size()/2, w.end());
        p[1] += w;
        cout<<p[0]<<"|"<<p[1]<<endl;
    }
    return 0;
}

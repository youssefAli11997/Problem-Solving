// problem link : https://a2oj.com/p?ID=481

#include<bits/stdc++.h>
using namespace std;

#define solved first
#define timeP second.first
#define id second.second

bool comp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b){
    if(a.solved == b.solved){
        if(a.timeP == b.timeP){
            return a.id < b.id;
        }
        return a.timeP < b.timeP;
    }
    return a.solved > b.solved;
}

int main(){
    int t; cin>>t;
    while(t--){
        int c,p,s; cin>>c>>p>>s;
        int sub[c+2][p+2];
        pair<int, pair<int, int> > conts[c];
        for(int i=0; i<c; i++){
            conts[i].id = i+1;
            conts[i].solved = 0;
            conts[i].timeP = 0;
        }
        memset(sub, 0, sizeof sub);
        pair<pair<int,int>, pair<int,int> > qs[s];
        for(int i=0; i<s; i++){
            cin>>qs[i].first.first>>qs[i].first.second
               >>qs[i].second.first>>qs[i].second.second;
        }
        sort(qs,qs+s);
        for(int i=0; i<s; i++){
            int t,cid,pid,r;
            t = qs[i].first.first;
            cid = qs[i].first.second;
            pid = qs[i].second.first;
            r = qs[i].second.second;
            cid--; pid--;
            if(r == 0 && sub[cid][pid] != -1){
                sub[cid][pid]++;
            }else if(r == 1 && sub[cid][pid] != -1){
                conts[cid].timeP += 20 * sub[cid][pid] + t;
                sub[cid][pid] = -1;
                conts[cid].solved++;
            }
        }
        
        sort(conts, conts+c, comp);
        for(int i=0; i<c; i++)
            cout<<conts[i].id<<" "<<conts[i].solved<<" "<<conts[i].timeP<<endl;
    }
    return 0;
}

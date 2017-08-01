#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k,x,tmp = 2; cin>>n>>k;
    if(n == 1 && k == 0){
        cout<<"1";
        return 0;
    }
    if(k < n/2 || n == 1){
        cout<<"-1";
        return 0;
    }
    x = k - (n-2)/2;
    vector<int> s;
    s.push_back(x);
    s.push_back(2 * x);
    if(2 * x + k-2 < (int)1e9){
        for(int i=1, f=1; i<=(n-2)/2; i++, f+=2){
            s.push_back(2*x+f);
            s.push_back(2*x+f+1);
        }
    }else{
        for(int i=1, f=1; i<=(n-2)/2; i++, f+=2){
            s.push_back(f);
            s.push_back(f+1);
        }
    }
    if(n & 1) s.push_back(1e9);
    for(int i=0; i<s.size(); i++) printf("%d ",s[i]);
    return 0;
}

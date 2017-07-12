#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

string getDiff(int a,int b){
    string s="",as,bs;
    while(a){
        as = ((char)(a%10 + '0')) + as;
        bs = ((char)(b%10 + '0')) + bs;
        a /= 10;
        b /= 10;
    }
    int sz = as.size();
    for(int i=0; i<sz; i++){
        if(as[i]!=bs[i]){
            return bs.substr(i,sz);
        }
    }
    return "";
}

int main(){
    //freopen("in.txt","rt",stdin);
    //freopen("out.txt","wt",stdout);
    //cout<<getDiff(1999,2001);
    int c = 1;
    while(true){
        int n,first = 0; cin>>n;
        if(!n) break;
        vector<int> v;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            v.push_back(x);
        }
        cout<<"Case "<<c++<<":\n";
        for(int i=0; i<n; i++){
            if(i<n-1 && v[i+1]-v[i]==1 && !first){
                first = v[i];
            }
            else if((i<n-1 && v[i+1]-v[i]!=1 && first)||(i==n-1 && first)){
                cout<<"0"<<first<<"-"<<getDiff(first,v[i])<<"\n";
                first = 0;
            }else if((v[i+1]-v[i]!=1 && !first) || (i==n-1 && !first)){
                cout<<"0"<<v[i]<<"\n";
            }
        }
        cout<<"\n";
    }
    return 0;
}

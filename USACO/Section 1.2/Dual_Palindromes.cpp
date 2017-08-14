/*
ID: youssef24
PROG: dualpal
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> res;

bool isPalinDrome(){
    for(int i=0,j=res.size()-1; i<res.size()/2; i++,j--)
        if(res[i]!=res[j])return false;
    return true;
}

void toBase(int n,int b){
    while(n){
        res.push_back(n%b);
        n/=b;
    }
    reverse(res.begin(),res.end());
}

int main(){
    freopen("dualpal.in","rt",stdin);
    freopen("dualpal.out","wt",stdout);
    int n,s,flag=0,c=1; cin>>n>>s;
    while(c<=n){
        flag=0;
        s++;
        for(int b=2; b<=10; b++){
            toBase(s,b);
            if(isPalinDrome())flag++;
            res.clear();
        }
        if(flag>=2)
            cout<<s<<endl,c++;
    }
    return 0;
}

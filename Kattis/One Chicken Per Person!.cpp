#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    int res = m - n;
    if(res < 0){
    	if(res == -1) cout<<"Dr. Chaz needs "<<-res<<" more piece of chicken!\n";
        else cout<<"Dr. Chaz needs "<<-res<<" more pieces of chicken!\n";
    }
    else{
        if(res == 1)cout<<"Dr. Chaz will have "<<res<<" piece of chicken left over!\n";
        else cout<<"Dr. Chaz will have "<<res<<" pieces of chicken left over!\n";
    }
    return 0;
}

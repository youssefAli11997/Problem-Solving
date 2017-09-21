#include<bits/stdc++.h>
using namespace std;

int n,x,y,f[103],op = 0;

int mex(){
    int currMex = 101;
    for(int i=100; i>=0; i--) if(!f[i])
        currMex = i;
    if(currMex > x)
        f[x] = 0;
    else if(currMex < x)
        f[currMex] = 1;
    return currMex;
}

int main(){
    cin>>n>>x;
    for(int i=0; i<n; i++){
        cin>>y;
        f[y]++;
    }
    while(mex() != x) op++;
    cout<<op<<endl;
    return 0;
}

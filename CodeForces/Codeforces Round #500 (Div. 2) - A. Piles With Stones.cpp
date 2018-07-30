#include <iostream>
using namespace std;

int main()
{
    int n,k,xs=0,ys=0; cin>>n;
    for(int i=0; i<n; i++){
        cin>>k;
        xs += k;
    }
    for(int i=0; i<n; i++){
        cin>>k;
        ys += k;
    }
    if(xs >= ys) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}

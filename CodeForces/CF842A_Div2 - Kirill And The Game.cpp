// solved inside the contest
#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, r, x, y, k;
    cin>>l>> r>> x>> y>> k;
    for(long long i=x; i<=y; i++)
        if((k*i) >= l && (k*i) <= r)
        {	//cout<<i<<endl;
            cout<<"YES\n";
            return 0;
        }
    cout<<"NO\n";
    return 0;
}

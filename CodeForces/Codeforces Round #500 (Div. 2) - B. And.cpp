#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,a, mn = 1000; cin>>n>>x;
    vector<vector<int>> f(100009, vector<int>(2, 0));
    for(int i=0; i<n; i++) {
        cin>>a;
        f[a][0]++;
        if(a == (a&x))
            continue;
        f[a&x][1]++;
    }
    for(int i=0; i<f.size(); i++) {
        //if(i <= x)cout<<i<<" "<<f[i][0]<<" "<<f[i][1]<<endl;
        if(f[i][0] > 1) mn = 0;
        if(f[i][0] > 0 && f[i][1] > 0) mn = min(mn, 1);
        if(f[i][1] > 1) mn = min(mn, 2);
    }
    cout<<(mn == 1000? -1 : mn)<<endl;
    return 0;
}

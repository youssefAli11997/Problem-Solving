// problem link : https://www.hackerrank.com/challenges/between-two-sets

#include <iostream>
using namespace std;

int main() {
    int n,m,ans = 0; cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    for(int x=1; x<=100; x++){
        bool ok1 = true, ok2 = true;
        for(int i=0; i<n; i++) if(x % a[i] != 0)
            ok1 = false;
        for(int i=0; i<m; i++) if(b[i] % x != 0)
            ok2 = false;
        ans += ok1 && ok2;
    }
    cout<<ans<<endl;
    return 0;
}

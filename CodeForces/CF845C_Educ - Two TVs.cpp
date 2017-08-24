#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main(){
    int n,e1 = -1,e2 = -1; cin>>n;
    pair<int,int> lr[n];
    bool f = true;
    for(int i=0; i<n; i++)
        scanf("%d %d",&lr[i].f,&lr[i].s);
    sort(lr, lr+n);
    for(int i=0; i<n; i++){
        if(e1 < lr[i].f)
            e1 = lr[i].s;
            
        else if(e2 < lr[i].f)
            e2 = lr[i].s;
            
        else
            f = false;
    }
    printf("%s\n",f ? "YES" : "NO");
    return 0;
}

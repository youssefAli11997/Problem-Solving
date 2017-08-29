#include <bits/stdc++.h>
#define f first
#define s second.first
#define t second.second
using namespace std;

int main(){
    int n; cin>>n;
    vector<pair<int,pair<int,int> > > a(n);
    vector<int> widths(n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a[i].s, &a[i].f);
        a[i].t = i;
    }
    sort(a.rbegin(), a.rend());
    int tot_width = 0;
    for(int i=0; i<n; i++){
        tot_width += a[i].s;
        widths[a[i].t] = a[i].s;
    }
    for(int i=0; i<n; i++){
        printf("%d ", (tot_width-widths[i]) * ((a[0].t==i)? a[1].f : a[0].f));
    }
    printf("\n");
    return 0;
}

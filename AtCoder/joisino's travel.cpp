// link : http://abc073.contest.atcoder.jp/tasks/abc073_d
#include <bits/stdc++.h>
#define INF 1844674407370955161
using namespace std;

int n,m,r,a,b,c; unsigned long long ans = INF;
unsigned long long g[205][205];

int main(){

    cin>>n>>m>>r;
    int rs[r];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
          g[i][j] = INF;
        g[i][i] = 0;
    }

    for(int i=0; i<r; i++) cin>>rs[i];

    sort(rs, rs+r);

    for(int i=0; i<m; i++){
        cin>>a>>b>>c;
        g[a-1][b-1] = c;
        g[b-1][a-1] = c;
    }

    for (int k = 0; k < n; k++) // common error: remember that loop order is k->i->j
        for (int i = 0; i < n; i++)
          for (int j = 0; j < n; j++)
            g[i][j] = min(g[i][j], g[i][k] + g[k][j]);

    /*for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) if(g[i][j]!= INF)cout<<g[i][j]<<" "; else cout<<"# ";
        cout<<endl;
    }
    */
    do{
        unsigned long long dist = 0;
        for(int i=0; i<r-1; i++){
            //cout<<g[rs[i]-1][rs[i+1]-1]<<" "<<rs[i]<<" "<<rs[i+1]<<endl;
            dist += g[rs[i]-1][rs[i+1]-1];
        }
        ans = min(ans, dist);
    }while(next_permutation(rs, rs+r));
    cout<<ans<<endl;
    return 0;
}

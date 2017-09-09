#include <bits/stdc++.h>
using namespace std;

int t,x_size,y_size,n,x[11],y[11],dist[11][11],memo[11][1<<11];

int tsp(int curr, int bitmask){
    if(bitmask == (1<<(n+1))-1)
        return dist[curr][0];
    if(memo[curr][bitmask] != -1)
        return memo[curr][bitmask];
    int ans = INT_MAX;
    for(int nxt=0; nxt<=n; nxt++) if(nxt!=curr && !(bitmask & (1<<nxt))){
        ans = min(ans, dist[curr][nxt] + tsp(nxt, bitmask | (1<<nxt)));
    }
    return memo[curr][bitmask] = ans;
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x_size, &y_size);
        scanf("%d %d",&x[0],&y[0]);
        scanf("%d",&n);
        for(int i=1; i<=n; i++) scanf("%d %d",&x[i], &y[i]);
        for(int i=0; i<=n; i++) for(int j=0; j<=n; j++)
            dist[i][j] = abs(x[i]-x[j]) + abs(y[i]-y[j]);
        memset(memo, -1, sizeof memo);
        printf("The shortest path has length %d\n",tsp(0,1));
    }
    return 0;
}

// geometry
// solved inside the contest
#include <bits/stdc++.h>
using namespace std;

int r1,d,n,x,y,r2;

double dist(int x2,int y2){
    return sqrt((double)x2*x2 + (double)y2*y2);
}

int main(){
    cin>>r1>>d;
    int n,ans=0; cin>>n;
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &x, &y, &r2);
        double dis = dist(x,y) + r2;
        //cout<<" "<<dis<<endl;
        if(dis <= r1){ // inside circle
            if(dis <= r1 && dis-2*r2 >= r1-d) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

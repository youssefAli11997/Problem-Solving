#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","rt",stdin);
    //freopen("out.txt","wt",stdout);
    cout<<"PERFECTION OUTPUT\n";
    while(1){
        int n, sum = 0; cin>>n;
        if(!n){
            cout<<"END OF OUTPUT\n";
            break;
        }
        for(int i=1; i<n; i++) if(n % i == 0) sum += i;
        printf("%5d  %s\n",n, (sum == n? "PERFECT" : (sum < n ? "DEFICIENT" : "ABUNDANT")));
    }
    return 0;
}

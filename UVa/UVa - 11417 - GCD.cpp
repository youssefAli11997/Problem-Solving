#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){return b == 0 ? a : gcd(b, a % b);}

int main(){
    while(1){
        int n,g=0; cin>>n;
        if(!n) break;
        for(int i=1; i<n; i++) for(int j=i+1; j<=n; j++) g += gcd(i,j);
        cout<<g<<endl;
    }
	return 0;
}

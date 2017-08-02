#include <bits/stdc++.h>
using namespace std;

int main(){
    bitset<1000005> bs; bs.set();
    vector<int> primes;
    bs[0] = bs[1] = 0;
    for(long long i=2; i<1000000; i++) if(bs[i]){
        for(long long j=i*i; j<1000000; j+=i)
            bs[j] = 0;
        primes.push_back(i);
    }
    int psz = primes.size();
    while(1){
        int n, ans = 0; cin>>n;
        if(!n) break;
        for(int i=0; i<psz; i++){
            if(primes[i] > n/2) break;
            if(bs[n - primes[i]]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}

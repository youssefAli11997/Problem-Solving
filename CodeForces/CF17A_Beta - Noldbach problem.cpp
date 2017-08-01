#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<bool> sieve(n+1, true);
    sieve[0] = sieve[1] = false;
    vector<int> primes;
    for(int i=2; i<=n+1; i++)if(sieve[i]){
        for(int j=i*i; j<=n+1; j+=i)
            sieve[j] = false;
        primes.push_back(i);
    }
    for(int j=0; j<(int)primes.size(); j++){
        for(int i=0; i<(int)primes.size()-1; i++)if(primes[i] + primes[i+1] + 1 == primes[j]){
            k--;
        }
    }
    cout<<(k <= 0 ? "YES":"NO");
	  return 0;
}

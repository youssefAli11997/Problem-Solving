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
        int n, x, y, mx = -1; cin>>n;
        if(!n) break;
        for(int i=0; i<psz; i++){
            if(primes[i] > n) break;
            if(bs[n - primes[i]] && abs(n - 2 * primes[i]) > mx){
                mx = abs(n - 2 * primes[i]);
                x = primes[i];
                y = n - primes[i];
            }
        }
        if(mx != -1){
            cout<<n<<" = "<<x<<" + "<<y<<endl;
        }else
            cout<<"Goldbach's conjecture is wrong.\n";
    }
	return 0;
}

#include <cstdio>
using namespace std;

int minPrime[(int)1e6+1], p[(int)1e6+1];

void sieve(){
    for(int i=2; i*i<=(int)1e6; i++) if(!minPrime[i]){
        for(int j=i*i; j<=(int)1e6; j+=i){
            if(!minPrime[j]) minPrime[j] = i;
        }
    }
    for(int i=0; i<=(int)1e6; i++)
        p[minPrime[i]]++;
}

int main(){
    sieve();
    int t; scanf("%d",&t);
    while(t--){
        int x, cnt = 0; scanf("%d",&x);
        printf("%d\n",p[x]+1); // +1 because he didn't count himself as a minimum prime for himself!
    }
    return 0;
}

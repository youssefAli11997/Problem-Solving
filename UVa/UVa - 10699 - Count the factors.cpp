#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000002;
int numDiffPF[MAX];

void modified_sieve(){
    for(int i = 2; i < MAX; i++) if(numDiffPF[i] == 0){
        for(int j = i; j < MAX; j += i)
            numDiffPF[j]++;
    }
}

int main(){
    modified_sieve();
    while(1){
        int n; scanf("%d",&n);
        if(!n) break;
        printf("%d : %d\n",n,numDiffPF[n]);
    }
    return 0;
}

//link: https://www.codechef.com/problems/FCTRL2
#include <bits/stdc++.h>
using namespace std;

int fact[200];

void printFactorial(){
    int i=199;
    for(; i>=0; i--)if(fact[i] > 0)break;
    for(; i>=0; i--)cout<<fact[i];
    cout<<endl;
}

void calcFactorial(int n){
    fact[0] = 1;
    // calculating the factorial
    for(int i=1; i<=n; i++){
        // actual multiplication process
        for(int k=199; k>=0; k--){
            fact[k] *= i;
            int j=k;
            // adding carries to the next places
            while(fact[j] > 9 && j < 199){
                int val = fact[j];
                fact[j] %= 10;
                j++;
                fact[j] += val / 10;
            }
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        memset(fact, 0, sizeof(fact));
        calcFactorial(n);
        printFactorial();
    }
    /*for(int i=1; i<101; i++){
        memset(fact, 0, sizeof(fact));
        calcFactorial(i);
        printFactorial();
    }*/
    return 0;
}

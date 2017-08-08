// simulation
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n], alice = 0, bob = 0, aliceAte = 0, bobAte = 0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0, j=n-1; i<=j; ){
        if(i == j && !alice && !bob){
            aliceAte++;
            break;
        }
        if(alice == 0){
            aliceAte++;
            alice = a[i];
            i++;
        }
        if(bob == 0){
            bobAte++;
            bob = a[j];
            j--;
        }
        if(alice <= bob){
            bob -= alice;
            alice = 0;
        }
        else{
            alice -= bob;
            bob = 0;
        }
    }
    cout<<aliceAte<<" "<<bobAte<<endl;
    return 0;
}

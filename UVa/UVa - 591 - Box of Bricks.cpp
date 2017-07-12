#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","rt",stdin);
    //freopen("out.txt","wt",stdout);
    int s = 0;
    while(1){
        s++;
        int n; cin>>n;
        if(!n) break;
        int arr[n],sum=0,avr,mvs=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        avr = sum / n;
        for(int i=0; i<n; i++) if(arr[i] > avr) {
            mvs += arr[i] - avr;
        }
        cout<<"Set #"<<s<<"\nThe minimum number of moves is "<<mvs<<".\n\n";
    }
    return 0;
}

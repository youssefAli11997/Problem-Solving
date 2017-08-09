// test-your-understanding problem
// tutorial link : https://www.hackerearth.com/practice/algorithms/sorting/counting-sort/tutorial/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n], freq[101] = {0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(int i=0; i<101; i++) if(freq[i] > 0){
        cout<<i<<" "<<freq[i]<<endl;
    }
    return 0;
}

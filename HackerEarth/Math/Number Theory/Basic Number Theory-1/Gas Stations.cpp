// problem link : https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/gas-stations-1/
#include <iostream>
using namespace std;

int main(){
    int n,x,p, ans = 0;
    bool swtch = true;
    cin>>n>>x;
    for(int i=0; i<n; i++){
        cin>>p;
        x -= p;
        if(swtch)
            ans++;
        if(x <= 0 && swtch){
            swtch = false;
        }
    }
    cout<<ans<<endl;
    return 0;
}

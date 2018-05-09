#include <iostream>
#include <map>
using namespace std;

int main(){
    int x,ans=0; cin>>x;
    for(int i=5; i>0 && x>0; i--){
        ans += x/i;
        x -= (x/i) * i;
    }
    cout<<ans<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0, tmp, cnt; bool flag; cin>>n;
    for(int i=1; i<=n; i++){
        tmp = i;
        cnt = 0;
        for(int x=2; tmp > 1; x++){
            flag = false;
            while(tmp % x == 0){
                tmp /= x;
                if(!flag){
                    cnt++;
                    flag = true;
                }
            }
            if(cnt > 2) break;
        }
        if(cnt == 2)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}

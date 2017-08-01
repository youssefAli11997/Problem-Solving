#include <bits/stdc++.h>
using namespace std;

int n,k,tmp,i = 2;
vector<int> ans;
int main(){
    cin>>n>>k;
    tmp = k;
    while(n > 1){
        while(n % i == 0){
            if(k == 1){
                ans.push_back(n);
                n = 1;
                break;
            }
            ans.push_back(i);
            n /= i;
            k--;
        }
        i++;
    }
    if(ans.size() < tmp)cout<<"-1\n";
    else for(int i=0; i<(int)ans.size(); i++)
        cout<<ans[i]<<" ";
	return 0;
}

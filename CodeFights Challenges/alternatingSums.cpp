// problem link : https://codefights.com/arcade/intro/level-4/cC5QuL9fqvZjXJsW9
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

#include <bits/stdc++.h>
using namespace std;

vector<int> alternatingSums(vector<int> a) {
    vector<int> v(2,0);
    for(int i=0; i<a.size(); i++){
        v[i%2] += a[i];
    }
    return v;
}

int main(){
    int a[] = {50, 60, 60, 45, 70};
    vector<int> atr(a,a+5),ans;
    ans = alternatingSums(atr);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}

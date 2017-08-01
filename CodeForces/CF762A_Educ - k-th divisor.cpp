#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    vector<long long> s;
    int k; cin>>n>>k;
    for(long long i=1; i*i<=n; i++){
        if(n % i == 0){
            s.push_back(i);
            if(n / i != i)
                s.push_back(n / i);
        }
    }
    sort(s.begin(), s.end());
    if(k <= s.size()) cout<<s[k-1];
    else cout<<"-1\n";
    return 0;
}

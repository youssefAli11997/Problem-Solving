// link: https://www.spoj.com/problems/COINS/

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<long long, long long> sol;

long long solve(long long n){
  if(n == 0)
    return 0;

  if (sol.count(n))
    return sol[n];

  long long ret = max(solve(n/2) + solve(n/3) + solve(n/4), n);
  sol.insert(pair<int,int>(n, ret));
  return ret;
}

int main() {
  long long n;
  while(cin>>n){
    cout<<solve(n)<<endl;
  }
}

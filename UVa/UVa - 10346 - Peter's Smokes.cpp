#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  while(cin>>n>>k){
    int c=0;
    while(n){
      if(n>=k){
        c += k;
        n -= k;
        n += 1;
      }else{
        c += n;
        n  = 0;
      }
    }
    printf("%d\n",c);
  }
  return 0;
}

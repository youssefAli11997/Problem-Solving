#include <iostream>

using namespace std;

int gcd(int a,int b){
  return b==0? a:gcd(b,a%b);
}

int main(){
  int t;
  long long a,b;
  cin>>t;
  for(int i=0; i<t; i++){
      cin>>a>>b;
      cout<<gcd(a,b)<<" "<<a*(b/gcd(a,b))<<"\n";
  }
  return 0;
}

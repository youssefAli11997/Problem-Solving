// problem link : http://abc067.contest.atcoder.jp/tasks/arc078_a

#include <bits/stdc++.h>
using namespace std;
long long n,sumA,sumB,mn;
int main(){
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
    sumA += arr[i];	
  }
  mn = 1e15;
  for(int i=n-1; i>0; i--){
    sumA -= arr[i];
    sumB += arr[i];
    mn = min(mn, abs(sumA - sumB));
  }
  cout<<mn<<endl;
}

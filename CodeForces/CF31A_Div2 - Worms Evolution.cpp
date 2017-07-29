// problem link : http://codeforces.com/contest/31/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	pair<int,int> a[n];
	for(int i=0; i<n; i++){
		cin>>a[i].first;
		a[i].second = i+1;
	}
	sort(a, a + n);
	for(int k=0; k<n; k++)for(int j=k+1; j<n; j++)for(int i=j+1; i<n; i++){
		if(a[i].first == a[j].first + a[k].first){
			cout<<a[i].second<<" "<<a[j].second<<" "<<a[k].second;
			return 0;
		}	
	}
	cout<<"-1";
	return 0;
}

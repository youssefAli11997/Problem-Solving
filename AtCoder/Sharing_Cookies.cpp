#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b; cin>>a>>b;
	cout<<((a+b)%3 == 0 || a%3 == 0 || b%3 == 0 ? "Possible" : "Impossible")<<endl;
}

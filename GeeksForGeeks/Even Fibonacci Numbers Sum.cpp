// problem link : http://practice.geeksforgeeks.org/problems/even-fibonacci-numbers-sum/0
#include <iostream>
using namespace std;

int fib[35], n;

int f(int x) {
	if(x <= 1)
	return 1;
	if(fib[x]) return fib[x];
	return fib[x] = f(x - 1) + f(x - 2);
}

int main() {
	f(35); // generate fibonacci sequence
	int t; cin>>t;
	while(t--) {
	    cin>>n;
	    long long sum = 0;
	    for(int i=0; fib[i] <= n; i++)
		if(fib[i] % 2 == 0)
		    sum += fib[i];
	    cout<<sum<<endl;
	}
	return 0;
}

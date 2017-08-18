// link : http://practice.geeksforgeeks.org/problems/excel-sheet/0
#include <iostream>
using namespace std;

int main() {
		int t; scanf("%d", &t);
	while(t--){
	    int n; scanf("%d",&n);
	    string res = "";
	    while(n){
	        int rem = n % 26;
	        if(rem == 0){
	            res = 'Z' + res;
	            n = n/26 - 1;
	        }
	        else{
	            res = (char)(rem - 1 + 'A') + res;
	            n /= 26;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}

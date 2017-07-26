// problem link : http://practice.geeksforgeeks.org/problems/count-numbers-containing-4/0
// geeksforgeeks profile : http://practice.geeksforgeeks.org/user-profile.php?user=Youssef%20Ali

#include <iostream>
using namespace std;

int main() {
	int t, cache[1000005]; cin>>t;
	while(t--){
	    int n; cin>>n;
	    for(int i=4; i<=n; i++){
	        int tmp = i;
	        bool has4 = false;
	        while(tmp){
	            if(tmp % 10 == 4)
	                has4 = true;
	            tmp /= 10;
	        }
	        cache[n] += has4;
	    }
	    cout<<cache[n]<<endl;
	}
	return 0;
}

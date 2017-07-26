// problem link : http://practice.geeksforgeeks.org/problems/check-string/0
// geeksforgeeks profile : http://practice.geeksforgeeks.org/user-profile.php?user=Youssef%20Ali

#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    bool same = true;
	    for(int i=0; i<s.size()-1; i++)
	        if(s[i] != s[i+1])
	            same = false;
	    cout<<(same ? "YES":"NO")<<endl;
	}
	return 0;
}

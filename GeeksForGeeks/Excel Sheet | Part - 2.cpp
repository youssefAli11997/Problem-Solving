// problem link : http://practice.geeksforgeeks.org/problems/excel-sheet-part-2/0
#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    int a = 0;
	    for(int i=0; i<s.size(); i++){
	        a = a*26 + (s[i]-'A'+1);
	    }
	    cout<<a<<endl;
	}
	return 0;
}

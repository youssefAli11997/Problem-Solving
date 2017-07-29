#include <vector>
using namespace std;

class DerivativeSequence{

public:

vector<int> recur(vector<int> a, int n, int k){
	if(n == 0) return a;
	vector<int> b(k-1);
	for(int i=0; i<k-1; i++)
		b[i] = a[i+1] - a[i];
	return recur(b, n-1, k-1);
}

vector<int> derSeq(vector<int> a, int n){
	int k = a.size();
	return recur(a, n, k);
}

};

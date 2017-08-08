// problem link : https://community.topcoder.com/stat?c=problem_statement&pm=6680/

#include <cstring>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

const int MAX = 21, oo = (int)1e6;
int r[MAX],g[MAX],b[MAX],n,memo[MAX][4];

class RGBStreet{
    public:
    
    int minCost(int index, int last){
    	if(index == n)
    		return 0;
    	int &ret = memo[index][last];
    	
    	if(ret != -1)
    		return ret;
    	ret = oo;
    	
    	if(last != 0) // not r
    		ret = min(ret, r[index] + minCost(index + 1, 0));
    	if(last != 1) // not g
    		ret = min(ret, g[index] + minCost(index + 1, 1));
    	if(last != 2) // not b
    		ret = min(ret, b[index] + minCost(index + 1, 2));
    		
    	return ret;
    }
    
    int estimateCost(vector<string> houses){
    	for(int i=0; i<houses.size(); i++){
    		istringstream iss(houses[i]);
    		iss>>r[i]>>g[i]>>b[i];
    	}
    	n = houses.size();
    	memset(memo, -1, sizeof memo);
    	return minCost(0, 3);
    }	
};

// problem link : https://community.topcoder.com/stat?c=problem_statement&pm=6011

class Truckloads{
	public:
	int numTrucks(int numCrates, int loadSize){
		if(numCrates <= loadSize)
			return 1;
		if(numCrates % 2)
			return numTrucks(numCrates/2 + 1, loadSize) + numTrucks(numCrates/2, loadSize);
		return 2 * numTrucks(numCrates/2, loadSize);
	}
};

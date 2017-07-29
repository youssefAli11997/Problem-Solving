#include <string>
using namespace std;

class LotteryTicket{

	public:
	
	bool recur(int price, int b[], int i){
		if(price == 0) return true;
		if(price < 0 || i == 4) return false;
		return recur(price-b[i], b, i+1) || recur(price, b, i+1);
	}

	string buy(int price, int b1, int b2, int b3, int b4){
		int b[4] = {b1,b2,b3,b4};
		return (recur(price, b, 0) ? "POSSIBLE":"IMPOSSIBLE");
	}

};

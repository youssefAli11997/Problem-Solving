//link: https://www.codewars.com/kata/5552101f47fc5178b1000050/train/cpp

#include <cmath>

class DigPow
{
public:
  static int digPow(int n, int p);
};

int countDigits(int n){
  int ans = 0;
  while(n) {
    ans++;
    n /= 10;
  }
  return ans;
}

int DigPow::digPow(int n, int p) {
  int nTmp = n, powerVal = p + countDigits(n) - 1, res = 0;
  while(nTmp){
    res += pow((nTmp%10), powerVal--);
    nTmp /= 10;
  }
  
  if(res % n == 0)
    return res / n;
  else return -1;
}

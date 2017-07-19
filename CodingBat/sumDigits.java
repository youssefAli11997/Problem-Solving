// problem link : http://codingbat.com/prob/p163932

public int sumDigits(int n) {
  if(n == 0) return 0;
  return n % 10 + sumDigits(n / 10);
}

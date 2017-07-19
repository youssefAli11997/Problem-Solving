// problem link : http://codingbat.com/prob/p101409

public int count7(int n) {
  if(n == 0) return 0;
  return (n % 10 == 7 ? 1 : 0) + count7(n / 10);
}

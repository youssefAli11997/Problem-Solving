// problem link : http://codingbat.com/prob/p120015

public int fibonacci(int n) {
  if(n <= 1) return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

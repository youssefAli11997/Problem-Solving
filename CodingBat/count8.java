// problem link : http://codingbat.com/prob/p192383

public int count8(int n) {
  if(n == 0) return 0;
  if(n % 10 == 8 && n / 10 % 10 == 8)
    return 2 + count8(n / 10);
  return (n % 10 == 8 ? 1 : 0) + count8(n / 10);
}

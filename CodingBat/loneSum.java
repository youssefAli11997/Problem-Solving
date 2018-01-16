//link: http://codingbat.com/prob/p148972
public int loneSum(int a, int b, int c) {
  return (a==b || a==c? 0:a) + (b==a || b==c? 0:b) + (c==a || c==b? 0:c);
}

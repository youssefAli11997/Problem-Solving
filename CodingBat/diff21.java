// problem link : http://codingbat.com/prob/p116624

public int diff21(int n) {
  //return n > 21 ? 2 * Math.abs(21 - n) : Math.abs(21 - n);
  return Math.abs(21 - n) * (n > 21 ? 2:1);
}

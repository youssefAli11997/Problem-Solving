// problem link : http://codingbat.com/prob/p190570
public String missingChar(String str, int n) {
  return str.substring(0,n) + str.substring(n+1);
}

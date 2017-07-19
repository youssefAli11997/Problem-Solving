// problem link : http://codingbat.com/prob/p170371

public int countX(String str) {
  if(str.equals("")) return 0;
  return (str.charAt(0) == 'x' ? 1 : 0) + countX(str.substring(1, str.length()));
}

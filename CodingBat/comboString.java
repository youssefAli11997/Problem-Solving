// problem link : http://codingbat.com/prob/p168564

public String comboString(String a, String b) {
  String shrt = (a.length() < b.length() ? a : b);
  String lng = (a.length() > b.length() ? a : b);
  return shrt + lng + shrt;
}

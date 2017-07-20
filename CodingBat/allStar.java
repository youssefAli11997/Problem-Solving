// problem link : http://codingbat.com/prob/p183394

public String allStar(String str) {
  if(str.length() == 0) return "";
  if(str.length() == 1) return str.charAt(0) + "";
  return str.charAt(0) + "*" + allStar(str.substring(1, str.length()));
}

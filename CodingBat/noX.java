// problem link : http://codingbat.com/prob/p118230

public String noX(String str) {
  if(str.length() == 0) return "";
  return (str.charAt(0) == 'x' ? "" : str.charAt(0)) + noX(str.substring(1, str.length()));
}

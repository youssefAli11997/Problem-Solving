// problem link : http://codingbat.com/prob/p105722

public String endX(String str) {
  if(str.length() == 0) return "";
  return (str.charAt(0) == 'x' ? "" : str.charAt(0))
       + endX(str.substring(1,str.length()))
       + (str.charAt(0) == 'x' ? "x" : "");
}

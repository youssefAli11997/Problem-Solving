// problem link : http://codingbat.com/prob/p170924

public String changePi(String str) {
  if(str.equals("")) return "";
  return recur(str, 0);
}

public String recur(String str, int i) {
  if(i == str.length() - 1) return str;
  if(str.substring(i,i+2).equals("pi"))
    return recur(str.substring(0, i) + "3.14" + str.substring(i+2, str.length()), i+1);
  return recur(str, i+1);
}

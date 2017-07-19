// problem link : http://codingbat.com/prob/p101372

public String changeXY(String str) {
  return recur(str, 0);
}

public String recur(String str, int i) {
  if(i == str.length()) return str;
  if(str.charAt(i) == 'x')
    return recur(str.substring(0, i) + "y" + str.substring(i+1, str.length()), i+1);
  return recur(str, i+1);
}

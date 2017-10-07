// problem link : http://codingbat.com/prob/p123384
public String frontBack(String str) {
  if(str.length() < 2)
    return str;
  return str.substring(str.length()-1) + str.substring(1,str.length()-1) + str.charAt(0);
}

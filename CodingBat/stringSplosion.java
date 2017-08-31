// link : http://codingbat.com/prob/p117334
public String stringSplosion(String str) {
  String res = "";
  for(int i=0; i<str.length(); i++)
    res += str.substring(0,i+1);
   return res;
}

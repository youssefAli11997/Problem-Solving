// link : http://codingbat.com/prob/p117334
public String stringSplosion(String str) {
  String res = "";
  for(int i=0; i<str.length(); i++)
    res += str.substr(0,i);
   return res;
}

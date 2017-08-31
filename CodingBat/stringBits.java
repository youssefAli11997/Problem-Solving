// link : http://codingbat.com/prob/p165666
public String stringBits(String str) {
  String res = "";
  for(int i=0; i<str.length; i+=2)
    res += str.charAt(i);
   return res;
}

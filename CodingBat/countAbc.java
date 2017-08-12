// problem link : http://codingbat.com/prob/p161124
public int countAbc(String str) {
  if(str.length() < 3) return 0;
  return (str.substring(0,3).equals("abc") || str.substring(0,3).equals("aba") ? 1 : 0)
        + countAbc(str.substring(1));
}

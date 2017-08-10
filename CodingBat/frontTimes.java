// problem link : http://codingbat.com/prob/p101475
public String frontTimes(String str, int n) {
  String res = "";
  for(int i=0; i<n; i++)
    res += (str.length() > 3 ? str.substring(0,3) : str);
  return res;
}

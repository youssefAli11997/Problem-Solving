// problem link : http://codingbat.com/prob/p194667

int countXX(String str) {
  int ans = 0;
  for(int i=0; i<str.length()-1; i++)
    if(str.substring(i,i+2).equals("xx"))
      ans++;
    return ans;
}

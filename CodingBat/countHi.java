// problem link : http://codingbat.com/prob/p184029

public int countHi(String str) {
  if(str.length() < 2) return 0;
  return (str.substring(0, 2).equals("hi") ? 1 : 0) + countHi(str.substring(1, str.length()));
}

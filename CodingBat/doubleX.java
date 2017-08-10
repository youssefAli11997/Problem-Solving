// problem link : http://codingbat.com/prob/p186759
boolean doubleX(String str) {
  for(int i=0; i<str.length()-1; i++){
    if(str.charAt(i) == 'x')
      if(str.charAt(i+1) == 'x')
        return true;
      else
        return false;
  }
  return false;
}

// link : http://codingbat.com/prob/p104029
public String stringClean(String str) {
  if(str.length() < 2) return str;
  int i = 1;
  for(; i<str.length(); i++) // getting number of adjacent chars that are the same
    if(str.charAt(i) != str.charAt(0))
      break;
  return (i > 1 ? 
            str.charAt(0) + stringClean(str.substring(i))
            :
            str.charAt(0) + stringClean(str.substring(1)));
}

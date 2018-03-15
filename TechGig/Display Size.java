public static String displaySize(int n){
  int minDiff = (int)1e7, rows = 0;
  for(int a=1; a*a<=n; a++) if(n % a == 0 && minDiff > (n/a)-a){
      minDiff = (n/a) - a;
      rows = a;
  }
  return rows + " " + (n/rows);
}

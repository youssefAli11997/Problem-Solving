/*
 - problem link : http://www.spoj.com/problems/STACKEZ/
 - solution by : Youssef Ali
 - spoj profile : http://www.spoj.com/users/youssef_ali/
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; scanf("%d", &t);
  stack<int> s;
  while(t--){
      int x; scanf("%d", &x);
      if(x == 1){
          scanf("%d", &x);
          s.push(x);
      }
      else if(x == 2){
          if(!s.empty())
            s.pop();
      }
      else{
          if(s.empty()) printf("Empty!\n");
          else printf("%d\n", s.top());
      }
  }
  return 0;
}

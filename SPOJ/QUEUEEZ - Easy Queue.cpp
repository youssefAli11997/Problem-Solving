/*
 - problem link : http://www.spoj.com/problems/QUEUEEZ/
 - solution by : Youssef Ali
 - spoj profile : http://www.spoj.com/users/youssef_ali/
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; scanf("%d", &t);
  queue<int> q;
  while(t--){
      int x; scanf("%d", &x);
      if(x == 1){
          scanf("%d", &x);
          q.push(x);
      }
      else if(x == 2){
          if(!q.empty())
            q.pop();
      }
      else{
          if(q.empty()) printf("Empty!\n");
          else printf("%d\n", q.front());
      }
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<string> path;
  while(n--){
      string com; cin>>com;
      if(com == "pwd"){
          if(path.size() == 0){
              cout<<"/\n";
              continue;
          }
          cout<<"/";
          for(vector<string>::iterator p = path.begin(); p != path.end(); p++){
              cout<<*p<<"/";
          }
          cout<<"\n";
      }
      else{
          string newPath; cin>>newPath;
          int i = 0;
          if(newPath[0] == '/'){
              path.clear();
              i++;
          }
          for(; i<newPath.size(); ){
              string tmp = "";
              for(int j=i; j<newPath.size() && newPath[j] != '/'; j++)
                tmp += newPath[j];
              if(tmp == ".."){
                  path.pop_back();
              }
              else{
                  path.push_back(tmp);
              }
              i += tmp.size() + 1; // (+ 1) is to ignore the slash
          }
      }
  }
  return 0;
}

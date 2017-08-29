// problem link : https://www.urionlinejudge.com.br/judge/en/problems/view/1855
#include <bits/stdc++.h>
using namespace std;

int main(){
	int w,h,curri,currj;
	cin>>w>>h;
	string g[h];
	bool vis[h][w], stop = false;
	memset(vis, false, sizeof vis);
	for(int i=0; i<h; i++) cin>>g[i];
	curri = 0; currj = 0;
	while(true){
		//cout<<curri<<" "<<currj<<endl;
		if(vis[curri][currj]){
			cout<<"!\n";
			return 0;
		}
		vis[curri][currj] = true;
		if(g[curri][currj] == '*'){
			cout<<"*\n";
			return 0;
		}
		else if(g[curri][currj] == '>'){
			for(int j=currj+1; j<w; j++) if(g[curri][j] != '.'){
				currj = j;
				break;
			}
		}
		else if(g[curri][currj] == '^'){
			for(int i=curri-1; i>=0; i--) if(g[i][currj] != '.'){
				curri = i;
				break;
			}
		}
		else if(g[curri][currj] == '<'){
			for(int j=currj-1; j>=0; j--) if(g[curri][j] != '.'){
				currj = j;
				break;
			}
		}
		else if(g[curri][currj] == 'v'){
			for(int i=curri+1; i<h; i++) if(g[i][currj] != '.'){
				curri = i;
				break;
			}
		}
	}
	return 0;
}

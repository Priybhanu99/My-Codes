#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 4;
string grid[N][N];

void solve(int x,int y,int X,int Y,int mult){

	if(x<0 ||y <0){
		cout<<"hi1";
		return;
	}
	if(abs(x)>4 || abs(y)>4){
		cout<<"hi2";
		return;
	}
	if(x==X&&y==Y){
		cout<<"hi3";
		return;
	}

	cout<<"here"<<x<<" "<<y<<"\n";
	//if(grid[x+mult][y]==""){
	grid[x+mult][y] = (grid[x][y] + "E");
	solve(x+mult,y,X,Y,mult*2);
	//}if(grid[x][y+mult]==""){
	grid[x][y+mult] = (grid[x][y+mult] + "N");
	solve(x+mult,y,X,Y,mult*2);
	//}if(grid[x-mult][y]==""){
	grid[x-mult][y] = (grid[x][y] + "W");
	solve(x+mult,y,X,Y,mult*2);
	//}if(grid[x][y-mult]==""){
	grid[x][y-mult] = (grid[x][y-mult] + "S");
	solve(x+mult,y,X,Y,mult*2);
	//}

	return;	

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	int c = 0;
	cin>>t; while(t--){

		c++;
		int x,y;
		cin>>x>>y;

		grid[0][0] = "";
		//memset(grid,"hello",sizeof(grid)/sizeof(int));
		solve(0,0,abs(x),abs(y),1);
		cout<<"Case #"<<c<<": "<<grid[0][1]<<"hello"<<"\n";

	}
}


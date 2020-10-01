#include <bits/stdc++.h>
using namespace std;

#define int long long int

void flood_fill(vector<string> a,int x,int y,char prev,char newch){
	if(x<0 || y<0 || x>a.size() || y>a[0].size()){
		return;
	}

	if(a[x][y]!=prev){
		return;
	}

	a[x][y] = newch;

	flood_fill(a,x+1,y,prev,newch);
	flood_fill(a,x,y+1,prev,newch);
	flood_fill(a,x-1,y,prev,newch);
	flood_fill(a,x,y-1,prev,newch);



}

void func(vector<string> a){

	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[0].size();j++){
			if(a[i][j]=='O'){
				a[i][j] = '-';
			}
		}
	}

	for(int i=0;i<a[0].size();i++){
		if(a[0][i] == '-'){
			flood_fill(a,0,i,'-','0');
		}
	}

	for(int i=0;i<a.size();i++){
		if(a[i][0] == '-'){
			flood_fill(a,i,0,'-','0');
		}
	}

	for(int i=0;i<a[0].size();i++){
		if(a[a[0].size()-1][i] == '-'){
			flood_fill(a,a[0].size()-1,i,'-','0');
		}
	}

	for(int i=0;i<a.size();i++){
		if(a[i][a[0].size()] == '-'){
			flood_fill(a,i,0,'-','0');
		}
	}

	for(int i=0;i<a.size;i++){
		for(int j=0;j<a[0].size();j++){
			if(a[i][j]=='-'){
				a[i][j] = 'X';
			}
		}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//}
}


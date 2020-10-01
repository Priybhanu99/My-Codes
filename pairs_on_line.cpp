#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	int m,c;
	cin>>n>>m;
	cin>>c;

	int a[n];
	map<int,int> maps;
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		a[i] = no;
		maps[no] ++;
	}

	int ans = 0;
	for(int i=0;i<n;i++){
		int x = a[i];
		int y = m*x+c;
		if(x==y){
			ans += maps[y]-1;
		}
		else if(maps.find(y)!=maps.end()){
			ans += maps[y];
		}
	}

	cout<<ans;
}


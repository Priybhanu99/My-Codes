#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int minx,miny,maxx,maxy;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		if(i==0){
			minx = maxx = x;
			miny = maxy = y;
		}else{


			minx = min(minx,x);
			miny = min(miny,y);
			maxx = max(maxx,x);
			maxy = max(maxy,y);
		}
	}

	cout<<(int)pow(max(maxx-minx,maxy-miny),2);

	//}

}
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

	int t;
	cin>>t; while(t--){

		int a,b,c,d;
		cin>>a>>b>>c>>d;

		int x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;

		
		if(x==x1 && x==x2){
			if(a+b>=1){
				cout<<"No\n";
				continue;
			}
		}

		if(y==y1 && y==y2){
			if(c+d>0){
				cout<<"No\n";
				continue;
			}
		}
		
		int walk_x = x + (-a+b);
		int walk_y = y + (-c+d);
		//cout<<walk_x<<" "<<walk_y<<"\n";
		if((walk_x>=x1 && walk_x<= x2) && (walk_y>=y1 && walk_y<=y2)){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}

	}
}


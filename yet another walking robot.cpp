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

		int n;
		cin>>n;

		int x = 0;
		int y = 0;

		int dist = INT_MAX;
		int l,r;

		pair<int,int> lp;

		map<pair<int,int> , int> gr;
		gr[{x,y}] = 0;
		for(int i=1;i<=n;i++){
			char ch;
			cin>>ch;
			if(ch=='L'){
				x = x-1;
			}else if(ch=='R'){
				x += 1;
			}else if(ch=='U'){
				y+=1;
			}else{
				y=y-1;
			}

			if(i==n){
				lp = {x,y};
			}

			//if not present
			if(gr.count({x,y})==0){
				gr[{x,y}] = i;
			}else{
				int index = gr[{x,y}];
				
				if(dist>abs(i-index)){
					l =  index+1;
					r = i;
				}
				dist = min(dist,abs(i-index));
			}

		}

		if(dist==INT_MAX){
			cout<<"-1"<<endl;
		}else{
			if(gr.count(lp)==0){
				cout<<"-1"<<endl;
			}else{
				cout<<l<<" "<<r<<endl;
			}
		}

		


	}
}


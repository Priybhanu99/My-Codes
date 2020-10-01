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
	int c = 0;
	cin>>t; while(t--){

		c++;
		int x,y;
		cin>>x>>y;

		string s;
		cin>>s;

		int x1 = 0;
		int y1 = 0;

		bool flag = true;
		int count = 0;

		for(int i=0;i<s.size();i++){

			if(x1==x && y1==y){
				flag = false;
				count = i;
				break;
			}

			if(s[i]=='N'){
				y++;
			}else{
				y--;
			}

			if(x1<x){
				x1 ++;
			}else if(y1<y){
				y1++;
			}


			
		}

		if(flag == true && (x1==x && y1==y)){
			flag = false;
			count = s.size();
		}

		//cout<<x<<" "<<y<<"and"<<x1<<" "<<y1;

		if(flag == true){
			cout<<"Case #"<<c<<": IMPOSSIBLE"<<"\n";

		}else{
			cout<<"Case #"<<c<<": "<<count<<"\n";

		}

	}
}


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

		int x,y,l,r;
		cin>>x>>y>>l>>r;

		vector<int> indexes,indexes1;
		if(x==0 || y==0){
			cout<<l<<"\n";
			continue;
		}

		int z = x|y;

		if(z <= r){
			cout<<z<<"\n";
			continue;
		}

		int i = 0;

		int temp = z;
		while(temp>0){
			if(temp&1==1){
				indexes.push_back(i);
				indexes1.push_back(i);
			}
			temp /= 2;
			i++;
		}

		indexes1.pop_back();

		int ans1 = 0;
		for(i=indexes.size()-1;i>=0;i--){
			if(ans1 + pow(2,i) >r){
				continue;
			}

			ans1 += pow(2,i);
		}

		int ans2 = 0;
		i = 0;

		for(i=indexes1.size()-1;i>=0;i--){
			if(ans2 + pow(2,i) >r){
				continue;
			}

			ans2 += pow(2,i);
		}

		if( ((ans1&x)*(ans1&y)) <= ((ans2&x)*(ans2&y)) ){
			cout<<ans2<<"\n";
		}else{
			cout<<ans1<<"\n";
		}

	}
}


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

		if(x==0 || y==0){
			cout<<l<<"n";
			continue;
		}

		int z1 = x|y;
		int z2 = z1-1;

		//cout<<z1<<" "<<z2<<"\n";

		int ans1 = 0;
		int ans2 = 0;

		vector<int> a,b;

		int i = 0;
		while(z1>0){
			if(z1&1==1){
				a.push_back(i);
			}
			z1 /= 2;
			i++;
		}

		i=0;
		while(z2>0){
			if(z2&1==1){
				b.push_back(i);
			}
			z2 /= 2;
			i++;
		}

		for(i=0;i<a.size();i++){
			if(ans1+(1<<a[i])>r){
				continue;
			}
			ans1 += (1<<a[i]);
		}

		for(i=0;i<b.size();i++){
			if(ans2+(1<<b[i])>r){
				continue;
			}
			ans2 += (1<<b[i]);
		}

		//cout<<ans1<<" "<<ans2<<"\n";
		cout<<max(ans1,ans2)<<"\n";


	}
}


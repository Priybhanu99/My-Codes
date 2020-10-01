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

		int sum = 0;

		if(b>=a){
			cout<<b<<"\n";
			continue;
		}

		sum += b;

		int rem = (c-d);
		if(rem<=0){
			cout<<"-1\n";
			continue;
		}

		int x = (a-sum)/rem;
		if((x*rem)<(a-sum)){
			x++;
		}

		//cout<<x<<",";

		cout<<sum+ (x*c)<<"\n";


	}
}

// 27
// 27
// 9
// -1
// 1
// 6471793
// 358578060125049

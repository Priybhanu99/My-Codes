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

	int sum = 0;
	vector<int> x,y;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin>>num;

		if((abs(num))%2){
			if(num<0){

				x.pb(num);
			}else{
				
				y.pb(num);
			}
		}

		if(num>0){
			sum += num;
		}

		
	}

	sort(x.rbegin(), x.rend());
	sort(y.begin(), y.end());


	if(sum%2==1){
		cout<<sum<<"\n";
	}else{
		int minm = INT_MIN;
		if(x.size()>0){
			minm = max(minm,sum+x[0]);
		}
		if(y.size()>0){
			minm = max(minm,sum-y[0]);
		}

		cout<<minm<<"\n";
	}

	//}

}
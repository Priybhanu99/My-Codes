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

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	map<int,int> a,b;

	for (int i = 0; i < n; ++i)
	{
		int num;

		cin>>num;
		a[num] = i;
	}

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin>>num;
		b[num] = i;
	}

	map<int,int> diff;
	for(auto i:a){
		int x = b[i.first];//5
		diff[((n+i.second-x)%n)] ++;
	}


	int ans = 0;
	for(auto i:diff){
		ans = max(ans,i.second);
	}

	cout<<ans;




}


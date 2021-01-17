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

	int n;
	cin>>n;

	map<int,int> mp;
	for (int i = 0; i < n*n; ++i)
	{
		int num;
		cin>>num;

		mp[num]++;
	}

	int a[n][n];
	memset(a,0,sizeof(a));


	int odd = 0;
	for(auto i:mp){
		if(i.S%2){
			odd++;
		}
	}

	if(n%2==0&&odd>0 || odd>1){
		cout<<"NO\n";
		return;
	}

	int row = 0;
	for(auto i:mp){
		if(i.S)
	}


}
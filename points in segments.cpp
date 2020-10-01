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

	int n,k;
	//cin>>t; while(t--){

	cin>>n>>k;
	
	int a[k+1];
	memset(a,0,sizeof(a));

	while(n--){
		int l,r;
		cin>>l>>r;

		for(int i=l;i<=r;i++){
			a[i]++;
		}
	}

	int count = 0;
	vector<int> ans;
	for (int i = 1; i <= k; ++i)
	{
		if(a[i]==0){
			count++;
			ans.push_back(i);
		}
	}

	cout<<count<<"\n";
	for(auto i:ans){
		cout<<i<<" ";
	}
	cout<<"\n";
	//}
}


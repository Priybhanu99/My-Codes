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

	
	int n;
	cin>>n;

	string s,t;
	cin>>s>>t;	

	bool flag = true;
	vector<int> ans;

	for (int i = 0; i < n; ++i)
	{
		if(s[i]==t[i]){
			continue;
		}

		int curr = -1;
		for(int j=i+1;j<n;j++){
			if(s[j]==t[i]){
				curr = j;
			}
		}

		if(curr==-1){
			cout<<"-1\n";
			return 0;
		}

		for(int x=curr-1;x>=i;x--){
			swap(s[x],s[x+1]);
			ans.push_back(x+1);
		}
	}

	cout<<ans.size()<<"\n";

	for(auto i:ans){
		cout<<i<<" ";
	}

	cout<<"\n";


}


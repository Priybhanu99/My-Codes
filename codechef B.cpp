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
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		vector<int> index;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]==1){
				index.push_back(i);
			}
		}

		if(index.size()==0 || index.size()==1){
			cout<<"YES\n";
			continue;
		}

		bool flag = true;
		for (int i = 0; i < index.size()-1; ++i)
		{
			if(index[i+1]-index[i]<6){
				flag = false;
				break;
			}
		}

		if(flag==true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}


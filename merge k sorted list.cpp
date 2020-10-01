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
	//cin>>t; while(t--){

	int n,k;
	cin>>n>>k;

	int a[n][k];
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	int index[k];
	memset(index,0,sizeof(index));

	// for(int i=0;i<k;i++){
	// 	cout<<a[i][index[i]]<<" ";
	// }

	//cout<<"\n";
	vector<int> ans;

	int count = 0;
	while(count<n*k){

		int val = 0;
		int minm = INT_MAX;

		// for (int i = 0; i < k; ++i)
		// {
		// 	cout<<index[i]<<" ";
		// }
		//cout<<"\n";
		for(int i=0;i<k;i++){
			if(index[i]<n && a[i][index[i]]<minm){
				minm = a[i][index[i]];
				val = i;
			}

		}
		ans.push_back(minm);
		index[val]++;

		count++;


	}

	for(auto i:ans){

		cout<<i<<" ";

	}
	//}
}


#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool compare(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}

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
		pair<int,int> a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].first;
			cin>>a[i].second;
		}

		sort(a,a+n,compare);

		int ep = a[0].second;
		int count = 1;

		for(int i=1;i<n;i++){
			if(a[i].first>=ep){
				count++;
				ep = a[i].second;
			}
		}

		cout<<count;

	}
}


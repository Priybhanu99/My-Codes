#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int mod = 998244353;

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
	pair<int,int> a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].first;
		a[i].second = i;
	}

	sort(a,a+n);
	reverse(a,a+n);
	int sum = 0;

	vector<int> index;


	for(int i=0;i<k;i++){
		sum += a[i].first;
		index.push_back(a[i].second);
	}

	sort(index.begin(), index.end());

	int count = 1;
	for(int i=1;i<k;i++){
		count = (count * (index[i]-index[i-1]) )%mod;
	}

	cout<<sum<<" "<<count;






	//}
}


#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool comp(pair<int,int> a,pair<int,int> b){
	return (float)a.second/(float)a.first*1.00>(float)b.second/(float)b.first*1.00;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,capacity;
	cin>>n>>capacity;
	int s[n],w[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>w[i];
	}

	pair<int,int> a[n];
	for (int i = 0; i < n; ++i)
	{
		a[i].first = s[i];
		a[i].second = w[i];
	}

	sort(a,a+n,comp);
	// for (int i = 0; i < n; ++i){
	// 	cout<<a[i].first<<" "<<a[i].second<<endl;
	// }

	int sum = 0;
	for (int i = 0; i < n; ++i){

		if(a[i].first<=capacity){
			capacity -= a[i].first;
			sum += a[i].second;
		}

		if(capacity<=0){
			break;
		}
	}

	cout<<sum;


}


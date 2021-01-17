#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

bool ispossible(int *a,int sum,int k,int n){

	int cnt = 0,temp = 0;

	for (int i = 0; i < n; ++i)
	{
		if(temp+a[i]>sum){
			temp = a[i];
			cnt++;
		}else{
			temp += a[i];
		}
	}

	return cnt<=k;
}

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

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int ans = a[n-1] - a[0];
	vector<int> temp;

	for (int i = 0; i < n-1; ++i)
	{
		temp.pb(a[i]-a[i+1]);
	}

	sort(temp.begin(), temp.end());
	for (int i = 0; i < k-1; ++i)
	{
		ans += temp[i];
	}

	cout<<ans;

	//}

}
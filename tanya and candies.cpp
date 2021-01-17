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

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	vector<int> odd(n,0),even(n,0);
	even[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		if(i%2){
			odd[i] += odd[i-1] + a[i];
			even[i] = even[i-1];
		}else{
			even[i] = even[i-1] + a[i];
			odd[i] = odd[i-1];
		}
	}

	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		int l,r;
		if(i==0){
			if(even[n-1]-even[0]==odd[n-1]-odd[0]){
				count++;
			}

		}else{
			if((even[n-1]-even[i]+odd[i-1])==(odd[n-1]-odd[i]+even[i-1])){
				count++;
			}
		}
	}

	cout<<count;
}
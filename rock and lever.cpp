#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int setBitNumber(int n) 
{ 
	if (n == 0) 
		return 0; 

	int msb = 0; 
	n = n / 2; 
	while (n != 0) { 
		n = n / 2; 
		msb++; 
	} 

	return msb; 
} 

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		map<int,int> m;
		for (int i = 0; i < n; ++i)
		{
			m[setBitNumber(a[i])]++;
		}

		int count = 0;
		for(auto i:m){
			count += ((i.second)*(i.second-1))/2;
		}
		cout<<count<<"\n";
	}

}
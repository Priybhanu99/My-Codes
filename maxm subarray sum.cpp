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

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int max_till_here = 0,max_ans = INT_MIN;


	for (int i = 0; i < n; ++i)
	{
		max_till_here+=a[i];
		if(max_till_here>max_ans){
			max_ans = max_till_here;
		}

		max_till_here = max(0LL,max_till_here);
	}

	cout<<max_ans;

	//}

}
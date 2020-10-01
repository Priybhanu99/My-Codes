#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

void solve(vector<int> a,int n){

	int lis[n+1];

	memset(lis,1,sizeof(lis));

	for (int i = 0; i < n; ++i)
	{
		int count = 0;
		for(int j=0;j<i;j++){
			if(a[i]>=a[j]){
				count = max(count,lis[j]);
			}
		}

		lis[i] = a[i] + count;
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<lis[i]<<" ";
	}
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

	vector<int> a{1, 101, 2, 3, 100, 4, 5}; 
	solve(a,7);

	//}

}
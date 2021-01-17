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

	int a[n],mxm = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mxm = max(mxm,a[i]);
	}

	vector<int> temp(mxm+1,0);


	for (int i = 0; i < n; ++i)
	{
		for(int j=1;j*j<=a[i];j++){
			if(a[i]%j==0){
				if(j*j==a[i]){
					temp[j]++;
				}
				else{
					temp[j]++;
					temp[a[i]/j]++;
				}
			}
		}
	}

	int ans = 1;
	for(int i=mxm;i>=0;i--){
		if(temp[i]>1){
			ans = i;
			break;
		}
	}
	cout<<ans;
	//}

}
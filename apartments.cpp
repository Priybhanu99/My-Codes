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

	int n,m,k;
	cin>>n>>m>>k;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}


	int i=0,j=0;

	sort(a,a+n);
	sort(b,b+m);

	int ans = 0;
	while(i<n && j<m){
		if(abs(a[i]-b[j])>k){
			if(a[i]>b[j]){
				j++;
			}else{
				i++;
			}
		}else{
			ans++;
			i++;
			j++;
		}
	}

	cout<<ans;

}
// 45 60 60 80
// 30 60 75
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

	int n,d;
	cin>>n>>d;

	int c[n+1][4];
	memset(c,sizeof(c),0);
	for (int i = 0; i <= n; ++i)
	{
		for(int j=0;j<=i;j++){
			if(j==0||j==i){
				c[i][j] = 1;
				continue;
			}

			c[i][j] = c[i-1][j-1]+c[i-1][j];
		}
	}


	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	// sort(a,a+n);

	int ans = 0;


	int last_index = 0;

	for (int i = 0; i < n-2; ++i)
	{
		int temp = a[i]+d;
		int index = lower_bound(a,a+n,temp)- (a);
		if(a[min(index,n-1)]!=temp){
			index--;
		}
		// cout<<temp<<" "<<index;
		// if(min(index,n)-i+)
		if(min(index,n-1)-i+1>=3 && min(index,n-1)>last_index){
			// cout<<"Added "<<c[min(index,n-1)-i+1][3];
			ans += c[min(index,n-1)-i+1][3];
			last_index = min(index,n-1);
		}
		// cout<<"\n";
	}

	cout<<ans<<"\n";

}
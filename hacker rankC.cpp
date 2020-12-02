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

	int t,tc = 0;
	cin>>t; while(t--){

		tc++;
		

		int w,n;
		cin>>w>>n;

		int mean = 0;
		int a[w];

		for (int i = 0; i < w; ++i)
		{
			cin>>a[i];
			mean += min(a[i],n-a[i]);
		}

		mean/=w;

		// sort(a,a+w);
		// mean = a[w/2];

		cout<<mean<<" ,";
		int ans = 0;
		for (int i = 0; i < w; ++i)
		{

			int temp = min(abs(mean-a[i]),n + mean - a[i]);
			cout<<temp<<" ";

			ans += temp;
		}


		cout<<"Case #"<<tc<<": "<<ans<<"\n";
	}

}
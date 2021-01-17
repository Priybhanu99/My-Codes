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

	int sum = (n*(n+1))/2;

	if(sum%2){
		cout<<"NO\n";
		return 0;
	}


	cout<<"YES\n";

	vector<int> a,b;

	if(n%2==0){

		for (int i = 1; i <= n/2; ++i)
		{
			if(i%2){
				a.pb(i);
				a.pb(n-i+1);
			}else{
				b.pb(i);
				b.pb(n-i+1);
			}
		}
	}else{
		sum/=2;

		int temp = 0;
		for(int i=n;i>=1;i--){
			if(temp+i<=sum){
				temp += i;
				a.pb(i);
			}else{
				b.pb(i);
			}
		}
	}

	// sort(a.begin(), a.end());
	// sort(b.begin(), b.end());

	cout<<a.size()<<"\n";
	for(auto i:a){
		cout<<i<<" ";
	}

	cout<<"\n";
	cout<<b.size()<<"\n";
	for(auto i:b){
		cout<<i<<" ";
	}

	cout<<"\n";

	//}

}
#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	
	int n,m;
	cin>>n>>m;

	vector<int> a(n),b(n);

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}


	vector<int> x;
	for (int i = 0; i < n; ++i)
	{
		x.push_back((m+b[0]-a[i])%m);
	}

	
	sort(b.begin(), b.end());
	sort(x.begin(), x.end());

	for(int i=0;i<n;i++){
		vector<int> temp(n);
		for(int j=0;j<n;j++){
			temp[j] = (a[j]+x[i])%m;
		}
		sort(temp.begin(), temp.end());
		if(b==temp){
			cout<<x[i]<<"\n";
			return 0;
		}
	}

	cout<<"0\n";

}


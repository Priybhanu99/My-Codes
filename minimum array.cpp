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
	map<int,int> m;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin>>num;

		m[num]++;
	}

	vector<int> c;

	for(int i=0;i<n;i++){
		int num = n-a[i];
		int temp = 0;
		
		auto itr = m.lower_bound(num);
		if(itr==m.end()){
			itr = m.begin();
		}
		num = (*itr).first;

		c.push_back((num+a[i])%n);

		if(m[num]==1){
			m.erase(num);
		}else{
			m[num] = m[num]-1;
		}

	}

	for (int i = 0; i < n; ++i)
	{
		cout<<c[i]<<" ";
	}

	cout<<"\n";

	//}

}
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

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int b;
		cin>>b;
		int f[n],p[n];
		for(int i=0;i<n;i++){
			cin>>f[i];
		}
		for(int i=0;i<n;i++){
			cin>>p[i];
		}

		map<int,int> m;
		for (int i = 0; i < n; ++i)
		{
			map<int,int> ::iterator it;
			it = m.find(f[i]);
			if(it==m.end()){
				m[f[i]] = p[i];
			}else{
				m[f[i]] =m[f[i]] + p[i];
			}
		}

		// cout<<"hi";
		int min = INT_MAX;
		for(auto i:m){
			if(i.second<min){
				min = i.second;
			}
		}

		cout<<min<<endl;
	}
}


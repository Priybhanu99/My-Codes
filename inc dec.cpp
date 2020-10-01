#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		sort(a,a+n);

		if(m[a[n-1]]>=2){
			cout<<"NO\n";
			continue;
		}

		bool flag = true;
		for (int i = 0; i < n-1; ++i)
		{
			if(m[a[i]]>2){
				flag = false;
				break;
			}
		}

		if(flag==false){
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";

		for(auto i:m){
			cout<<i.first<<" ";
		}

		vector<int> x;
		for(auto i:m){
			if(i.second>=2){
				x.push_back(i.first);
			}
		}

		reverse(x.begin(), x.end());
		
		for(auto i:x){
			cout<<i<<" ";
		}



		cout<<"\n";

	}
}


#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> find_divisors(int n){

	vector<int> ans;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			if(i*i==n){
				ans.push_back(i);
			}else{
				ans.push_back(i);
				ans.push_back(n/i);
			}

		}
	}

	sort(ans.begin(), ans.end());
	return ans;
}

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
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		sort(a,a+n);

		int prod = a[0]*a[n-1];

		vector<int> ans = find_divisors(prod);
		bool flag = true;
		
		if(ans.size() != n){
			flag = false;
		}else{
			for (int i = 0; i < n; ++i)
			{
				if(a[i]!=ans[i]){
					flag = false;
					break;
				}
			}
		}
		if(flag == true){
			cout<<prod<<"\n";
		}else{
			cout<<"-1\n";
		}

	}
}


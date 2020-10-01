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

	int t;
	cin>>t; while(t--){

		int n,k;
		cin>>n>>k;
		pair<int,int> a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].first;
			a[i].second = i;
		}

		if(k==1){
			cout<<"yes\n";
			continue;
		}

		sort(a,a+n);

		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			if(abs(a[i].second-i)%k!=0){
				flag = false;
				break;
			}
		}

		if(flag == true){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}

		
	}
}


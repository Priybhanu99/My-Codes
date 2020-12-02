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
	cin>>t; while(t--){

		int n,w;
		cin>>n>>w;

		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		vector<P> ans;

		int temp = ((w%2) ?(w/2+1):(w/2));

		bool flag = true;

		int ans1 = -1;

		for(int i=0;i<n;i++){

			if(a[i]<temp){
				ans.pb({a[i],i});
			}else{
				if(a[i]>=temp && a[i]<=w){
					flag = false;
					ans1 = i;
					break;
				}
			}
		}

		if(!flag){
			cout<<"1\n";
			cout<<ans1+1<<"\n";

			continue;
		}

		int sum = 0;
		int index = -1;

		int count = 0;

		// sort(ans.begin(), ans.end());
		for(auto i:ans){
			sum += i.F;
			if(sum>=temp && sum<=w){

				index = count;
				flag = false;
				break;
			}
			count++;

		}

		if(!flag){
			cout<<count+1<<"\n";
			for(int i=0;i<=count;i++){
				cout<<ans[i].S+1<<" ";
			}
			cout<<"\n";
		}else{
			cout<<"-1\n";
		}






	}

}
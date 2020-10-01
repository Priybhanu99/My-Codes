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
	int x = 0;

	cin>>t; while(t--){

		x++;
		cin>>n;

		pair<int,int> a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].first;
			cin>>a[i].second;
		}

		sort(a,a+n);

		string ans = "C";
		char ch = 'c';

		int maxm = a[0].second;
		bool flag = true;
		map<int,int> last_maxm;

		for(int i=1;i<n;i++){
			maxm = max(maxm,a[i-1].second);
			if(maxm<a[i].first){
				if(ch=='c'){
					ans += "C";
				}else{
					ans +="J";
				}
			}else{
				
				if(last_maxm.count(maxm)==0 || last_maxm[maxm]==1){
					last_maxm[maxm]++;
					if(ch=='c'){
						ans += "J";
					}else{
						ans +="C";
					}
				}else{
					flag = false;
					break;
				}
				
			}
		}

		cout<<"Case #"<<x<<": ";
		if(flag == true){
			cout<<ans<<"\n";
		}else{
			cout<<"IMPOSSIBLE\n";
		}

	}
}


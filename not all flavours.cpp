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
		int a[n];
		for(int i=0;i<n;i++){            
			cin>>a[i];
		}

		set<int> s;
		int maxm = 1;
		int count = 0;
		for(int i=0;i<n;i++){
			if(s.size()==k-1 && s.count(a[i])==0){
				count = 0;
				s.clear();
				s.insert(a[i]);
			}else{
				s.insert(a[i]);
				//cout<<i<<" ";
				count++;
				if(count>maxm){
					maxm = count;
				}
			}
		}

		cout<<maxm<<"\n";

	}
}


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

		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		bool flag = true;

		for (int i = 1; i < n-1; ++i)
		{

			int l = i-1;
			int r = i+1;

			// cout<<l<<" "<<r<<"\n";
			while(l>=0){
				if(a[l]<a[i]){
					break;
				}
				l--;
			}

			if(l>=0){
				while(r<n){
					if(a[r]<a[i]){
						break;
					}
					r++;
				}

			}

			// cout<<"i :"<<i<<" "<<l<<" "<<r<<"\n";
			if(l<0 || r>=n){
				continue;
			}

			flag = false;
			if(a[l]<a[i] && a[i]>a[r]){
				cout<<"YES\n";
				cout<<l+1<<" "<<i+1<<" "<<r+1<<"\n";
				break;
			}


		}

		if(flag){
			cout<<"NO\n";
		}

	}

}
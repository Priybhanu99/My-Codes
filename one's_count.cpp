#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

int32_t main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	
	//int t; cin>>t; while(t--)
	{
		int i,j,k,n,m,l,r,ans=0;
		cin>>n>>k;
		vector<int> a(n);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		j=0;
		for(i=0;i<n;i++){
			while(k>=0 && j<n){
				if(a[j] == 0){
					if(k==0 && a[j]==0){
						break;
					}
					k--;
				}
				j++;
			}
			//ans = max(ans,j-i);
			if(j-i > ans){
				ans = j-i;
				l=i;
				r=j;
			}
			if(a[i] == 0){
				k++;	
			}
		}
		cout<<ans<<"\n";
		for(i=0;i<n;i++){
			if(i>=l && i<r){
				cout<<1<<" ";
				continue;
			}
			cout<<a[i]<<" ";
		}

	}
	return 0;
}
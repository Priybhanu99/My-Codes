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

		int n,q;
		cin>>n>>q;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		if(n==1){
			cout<<a[0]<<"\n";
			continue;
		}

		vector<int> inc,dec;

		int i=1;
		while(i<n){

			//find inc
			while(i<n && a[i-1]<a[i]){
				i++;
			}
			inc.push_back(a[i-1]);

			while(i<n && a[i]<a[i-1]){
				i++;
			}
			dec.push_back(a[i-1]);

		}

		int count = 0;
		for(i=0;i<inc.size();i++){
			count+= inc[i];
		}

		for(i=0;i<dec.size()-1;i++){

			count-=dec[i];
		}

		cout<<count<<"\n";

	}

}
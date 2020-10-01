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
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t,tc = 0;
	cin>>t; while(t--){

		tc++;
		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int max_till_here = 1,maxm = 1;
		int diff = a[1]-a[0];

		int i = 1;
		while(i<n){
			if(a[i]-a[i-1] == diff){
				max_till_here++;
				if(max_till_here>maxm){
					maxm = max_till_here;
				}
			}else{
				diff = a[i] - a[i-1];
				max_till_here = 2;
			}
			i++;
		}

		cout<<"Case #"<<tc<<": "<<maxm<<"\n";
	}

}
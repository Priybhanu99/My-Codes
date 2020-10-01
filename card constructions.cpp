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


	vector<int> a(100005);
	a[1] = 2;

	for(int i=2;i<100005;i++){
		a[i] = 2*i + (i-1) + a[i-1];
		// cout<<a[i]<<" ";
	}

	// cout<<"\n";


	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;


		int count = 0;

		while(n>1){
			int index = lower_bound(a.begin(), a.end(),n)-a.begin();
			// cout<<a[index-1]<<" ";
			if(index>=1){
				if(a[index]==n){
					n-=a[index];
				}else{
					n-=a[index-1];
				}
				count++;
			}else{
				break;
			}
		}

		cout<<count<<"\n";


	}

}
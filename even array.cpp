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
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		int count1 = 0;
		int count2 = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];

			if(i%2 != a[i]%2){
				if(i%2==0){
					count1++;
				}else{
					count2++;
				}
			}
		}

		if(count1 != count2){
			cout<<"-1\n";
		}else{
			cout<<count1<<"\n";
		}
	}
}


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
		
		string s;
		cin>>s;

		int ans = INT_MAX;

		string seq = "RGB";

		for(int i=0;i<n-k+1;i++){

			for(int x=0;x<3;x++){
				int count = 0;

				for(int j=0;j<k;j++){

					if(s[i+j]!=seq[(x+j)%3]){
						count++;
					}
				}

				ans = min(ans,count);
			}


			//ans = min(ans,count);
		}

		cout<<ans<<"\n";
	}
}


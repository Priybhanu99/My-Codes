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
		
		int mnm = INT_MAX;
		int mxm = INT_MIN;

		int count = 0;

		while(mnm!=0 && count<k-1){
			int temp = n;

			mnm = INT_MAX;
			mxm = INT_MIN;


			while(temp){
				int rem = temp%10;
				if(rem<mnm){
					mnm = rem;
				}
				if(rem>mxm){
					mxm = rem;
				}

				temp /= 10;
			}

			n += mnm*mxm;
			count++;

			//cout<<n<<" ";
		}

		cout<<n<<"\n";

	}
}

// 42
// 487
// 519
// 528
// 544
// 564
// 588
// 628

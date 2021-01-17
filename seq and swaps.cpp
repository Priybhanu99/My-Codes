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

		int n,x;
		cin>>n>>x;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int index = -1;
		int ans = 0;

		bool flag = 0;
		while(1){

			if(flag){
				break;
			}

			index = -1;
			for (int i = 0; i < n-1; ++i)
			{

				if(a[i]>a[i+1]){
					index = i;
					break;
				}
			}

			if(index==-1){
				// cout<<"0\n";
				flag = 1;
				break;
			}

			// x = a[index];
			// if(x>a[index]){

			// }

			int temp = a[index];
			for(int i=index;i>=0;i--){
				if(a[i]>=x){
					break;
				}
				temp = min(temp,a[i]);
				a[i] = temp;
				ans++;
			}

			if(a[index]>temp){
				ans = -1;
				break;
			}else{

				a[index] = temp;
			}

		}


		cout<<ans<<"\n";


	}

}
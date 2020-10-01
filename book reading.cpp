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

		int n,m;
		cin>>n>>m;
		int sum1 = 0;
		int sum2 = 0;

		int sum = 0;
		// for(int i=m;i<=n;i+=m){
		// 	sum += i%10;
		// 	cout<<i%10<<" ";
		// }
		// cout<<"\n";
		// cout<<sum<<"\n";

		int factor = n/(m*10);
		int rem = (n/m)%10;

		for (int i = m; i <=m*10; i+= m)
		{
			sum1 += i%10;
		}

		for (int i = m; i <=m*rem; i+= m)
		{
			sum2 += i%10;
		}

		//cout<<sum1<<" "<<sum2<<"\n";
		sum += factor*sum1 + sum2;
		cout<<sum<<"\n";

	}
}


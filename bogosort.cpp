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
		vector<int> a(n);

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		sort(a.rbegin(),a.rend());
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";



	}
}

/*3
1
7
4
1 1 3 5
6
3 2 1 5 6 4
*/

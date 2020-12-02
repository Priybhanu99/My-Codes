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

		int n;
		cin>>n;

		vector<int> temp;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;

			temp.pb(num);
		}

		sort(temp.rbegin(), temp.rend());

		int a=temp[0]*temp[1]*temp[2]*temp[3]*temp[4];
		int b = temp[0]*temp[n-2]*temp[n-3]*temp[n-4]*temp[n-1];
		int c = temp[0]*temp[1]*temp[2]*temp[n-2]*temp[n-1];

		cout<<max(a,max(b,c))<<"\n";
		
	}

}
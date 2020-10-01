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
		int temp[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			temp[i] = a[i];
		}

		int b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}

		map<int,int> map;
		for (int i = 0; i < n; ++i)
		{
			map[a[i]] = i;
		}

		sort(temp,temp+n);

		bool flag = true;

		for(int i=0;i<n;i++){
			if(a[i]!=temp[i]){

				int typea = b[i];
				int typetemp = b[map[temp[i]]];

				if(typea == typetemp){
					flag = false;
					break;
				}

				swap(a[i],a[map[temp[i]]]);
				swap(b[i] , b[map[a[i]]]);
			}
		}

		if(flag==true){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}

	}
}


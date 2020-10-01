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
		vector<int> a;
		map<int,int> m;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(m.count(num)==0){
				a.push_back(num);
				m[num] = 1;
			}
		}

		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i]<<" ";
		// }
		int count = 0;
		for (int i = 0; i <a.size()-1; ++i)
		{
			if(a[i]>a[i+1]){
				count++;
			}
		}

		cout<<count+1<<"\n";

	}
}


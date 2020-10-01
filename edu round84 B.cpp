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

		set<int> set;
		
		for (int i = 0; i < n; ++i)
		{

			set.insert(i);
		}

		for(int i=0;i<n;i++){

			int k;
			cin>>k;

			vector<int> a(k);

			
			for(int j =0;j<k;j++){
				cin>>a[j];
				
			}

			bool flag = true;
			for(int j=0;j<k;j++){
				if(flag == false){
					break;
				}

				if(set.count(a[j])==0){
					flag = false;
					int temp = a[j];
					set.erase(temp);
				}
			}

			if(flag == true){
				cout<<
			}




		}

	}
}


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

		vector<int> even,odd;
		for(int i=0;i<n;i++){
			cin>>a[i];

			if(a[i]%2==0){
				even.push_back(i+1);
			}else{
				odd.push_back(i+1);
			}
		}

		if(even.size()==0 && odd.size()<=1){
			cout<<"-1\n";

			continue;

		}

		if(even.size()!=0){
			cout<<"1\n";
			cout<<even[0]<<"\n";
		}else{
			cout<<"2\n";
			cout<<odd[0]<<" "<<odd[1]<<"\n";
		}






	}
}


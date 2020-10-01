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

		int k;
		cin>>k;

		map<int,int> map;

		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			map[a[i]]++;
		}

		if(map.size()>k){
			cout<<"-1\n";
			continue;
		}

		int sum = 0;
		for (int i = 0; i < k; ++i){
			sum += a[i];
		}

		//cout<<"sum: "<<sum<<"\n";

		// if(n==k){
		// 	cout<<a.size()<<"\n";
		// 	for(auto i:a){
		// 		cout<<i<<" ";
		// 	}
		// 	cout<<"\n";
		// 	continue;
		// }

		bool flag = true;
		for(int i=1;i<a.size()-k;i++){

			if(a.size()>10000){
				flag  = false;
				break;
			}
			int temp = 0;	
			for(int j=i;j<i+k&&j<a.size();j++){
				temp+= a[j];
				if(temp>sum&&j!=i+k-1){
					int x = temp-sum;
					a.insert(a.begin()+j-1,x);
				}
			}

			int x = temp-sum;
			if(x!=0){
				a.insert(a.begin()+i+k-1,x);
			}
			
		}

		if(flag==true){
			cout<<a.size()<<"\n";
			for(auto i:a){
				cout<<i<<" ";
			}
			cout<<"\n";
		}
		else{
			cout<<"-1.\n";
		}


	}
}


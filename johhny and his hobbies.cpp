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
		set<int> s;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			s.insert(num);
		}

		int k = 1;

		bool flag = true;
		for(;k<1024;k++){

			set<int> temp = s;
			flag = true;
			for(auto i:s){

				if(flag==false){
					continue;
				}

				int x = i^k;
				if(temp.count(x)==0){
					flag = false;
					continue;
				}

				//temp.insert[x];
				temp.erase(x);
			}

			if(flag==true){
				break;
			}
		}

		if(flag==true){
			cout<<k<<"\n";
		}else{
			cout<<"-1\n";
		}

	}
}


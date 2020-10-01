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
		int a[2*n];

		vector<int> e,o;
		for(int i=0;i<2*n;i++){
			cin>>a[i];

			if(a[i]&1){
				o.push_back(i+1);
			}else{
				e.push_back(i+1);
			}
		}

		if(o.size()==0){
			e.pop_back();
			e.pop_back();
		}else if(e.size()==0){
			o.pop_back();
			o.pop_back();
		}else if(o.size()%2==1){
			o.pop_back();
			e.pop_back();
		}else{
			e.pop_back();
			e.pop_back();
		}

		for (int i = 0; i < e.size(); i+=2)
		{
			cout<<e[i]<<" "<<e[i+1]<<"\n";
		}

		for(int i=0;i<o.size();i+=2){
			cout<<o[i]<<" "<<o[i+1]<<"\n";
		}

	}
}


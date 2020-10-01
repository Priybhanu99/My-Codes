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
	//cin>>t; while(t--){

	cin>>n;

	//int a[n];
	map<int,int> m;

	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		m[num] ++;
	}

	for(auto i:m){
		cout<<i.first<<" "<<i.second<<"\n";
	}

	cout<<"\n";
	int count = 0;

	for(auto i:m){
		
		if(i.second!=0){

			for(int x = 0;x<4;x++){

				if(m.count(4-i.first-x)>0){
					cout<<i.first<<" "<<(4-i.first-x)<<"\n";
					int y = min(m[i.first],m[4-i.first-x]);
					cout<<y<<"\n";
					m[i.first] = m[i.first] - y;
					m[4-i.first-x] -= y;
					count += y;
					break;
				}

			}
		}
	}

	cout<<"\n"<<count<<"\n";

	for(auto i:m){
		cout<<i.first<<" "<<i.second<<"\n";
		if(i.second!=0){
			count += ((i.first * i.second)/4);
		}
	}

	cout<<count;




 	//}
}


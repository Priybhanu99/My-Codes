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

		map<int,int> map,index;
		for (int i = 0; i < n; ++i){
			int num;
			cin>>num;
			map[num]++;
			index[num]  = i;
		}

		int num = -1;
		for(auto i:map){
			if(i.second==1){
				num = index[i.first]+1;
				break;
			}
		}

		cout<<num<<"\n";
	}

}
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

		map<int,int> map;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;

			map[num]++;
		}

		multiset<int> a,b;

		for (int i = 0; i <= 100; ++i)
		{
			if(map.count(i)!=0){
				
				a.insert(i);
				if(map[i]>1){
					b.insert(i);
					// set.erase(i);
				}

				
			}
		}

		int ans1=0,ans2=0;
		for (int i = 0; i <= 100; ++i)
		{
			if(a.count(i)==0){
				ans1 = i;
				break;
			}
		}

		for (int i = 0; i <= 100; ++i)
		{
			if(b.count(i)==0){
				ans2 = i;
				break;
			}
		}

		// cout<<ans1<<" "<<ans2<<" ";

		cout<<ans1+ans2<<"\n";


	}

}
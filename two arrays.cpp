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

		int n,t;
		cin>>n>>t;

		int a[n];
		// map<int,set<int>> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			// s[a[i]].insert(i);
		}

		// for(int i=0;i<n;i++){
		// 	int num = t-a[i];

		// 	if(s.count(num)!=0){
		// 		a[i] = 1;
		// 		auto itr = (s[num].begin());
		// 		if((*itr)==i){
		// 			itr++;
		// 		}
		// 		a[*itr] = 0;

		// 		s[num].erase(s[num].begin());
		// 	}
		// }

		// for(int i=0;i<n;i++){
		// 	if(a[i]!=0 && a[i]!=1){
		// 		a[i] = 0;
		// 	}
		// }



		unordered_map<int,int> one,two;

		for (int i = 0; i < n; ++i)
		{
			int num = t-a[i];
			if(one.count(num)==0){
				one[a[i]] ++;
				a[i] = 0;
			}else{

				
				if(two.count(num)!=0 && one[num]>two[num]){
					two[a[i]]++;
					a[i] = 1;
				}else if(two.count(num)==0){
					two[a[i]]++;
					a[i] = 1;
				}else{
					one[a[i]]++;
					a[i] = 0;
				}
			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	if(one.count(a[i])!=0){
		// 		cout<<"0 ";
		// 	}else{
		// 		cout<<"1 ";
		// 	}
		// }

		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}

		cout<<"\n";

	}

}
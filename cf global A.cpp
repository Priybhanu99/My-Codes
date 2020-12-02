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

		int a[n];
		int sum = 0;

		// vector<int> neg,pos;

		// multiset<int> s;
		// for(int i=0;i<n;i++){
		// 	cin>>a[i];
		// 	sum += a[i];
		// 	// if(a[i]<0){
		// 	// 	neg.pb(a[i]);
		// 	// }else{
		// 	// 	pos.pb(a[i]);
		// 	// }
		// 	s.insert(a[i]);
		// }

		// if(sum==0){
		// 	cout<<"NO\n";
		// 	continue;
		// }

		// cout<<"YES\n";

		// sum = 0;
		// vector<int> ans;

		// for(auto i = s.begin();i!=s.end();i++){
		// 	int temp = sum + *i;
		// 	if(temp!=0){
		// 		ans.pb(*i);
		// 		s.erase(*i);
		// 	}else{
		// 		ans.pb(*(s.end()));
		// 		s.erase(*(s.end()));
		// 	}
		// }

		// // sort(neg.begin(), neg.end());
		// // sort(pos.rbegin(), pos.rend());

		// // // for (int i = 0; i < neg.size(); ++i)
		// // // {
		// // // 	cout<<neg[i]<<" ";
		// // // }

		// // // for (int i = 0; i < pos.size(); ++i)
		// // // {
		// // // 	cout<<pos[i]<<" ";
		// // // }

		// for(auto i:ans){
		// 	cout<<i<<" ";
		// }

		// cout<<"\n";

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum += a[i];
		}

		if(sum==0){
			cout<<"NO\n";
			continue;
		}

		cout<<"YES\n";


		sum = a[0];
		vector<int> ans;

		// ans.pb(a[0]);

		// for (int i = 1; i < n; ++i)
		// {
		// 	if(a[i]==-100){
		// 		continue;
		// 	}
		// 	int temp = a[i]+sum;

		// 	if(temp!=0){
		// 		ans.pb(a[i]);
		// 		sum += a[i];
		// 		a[i] = -100;
		// 	}else{

		// 		bool flag = true;
		// 		for(int j=1;j<n;j++){
		// 			if(j==i || a[j]==-100 || !flag){
		// 				continue;
		// 			}

		// 			if((a[j]+sum)!=0){
		// 				ans.pb(a[j]);
		// 				sum += a[j];
		// 				a[j] = -100;
		// 				flag = false;
		// 			}
		// 		}
		// 	}
		// }
		unordered_map<int,int> m;
		int prefix_Sum  = 0;

		while(m.size()!=n){
			for(int i=0;i<n;i++){

				if(m.count(i)!=0){
					continue;
				}
				if(prefix_Sum + a[i] != 0){
					ans.pb(a[i]);
					prefix_Sum += a[i];
				// a[i] = -100;
					m[i]++;
				}else{

					bool flag = true;
					for(int j=0;j<n;j++){

						if(flag==false){
							continue;
						}
						if(m.count(j)!=0){
							continue;
						}

						if(prefix_Sum+a[j] != 0){
							ans.pb(a[j]);
							prefix_Sum += a[j];
							m[j]++;
							flag = false;
						}
					}

				}
			}
		}
		for(auto i:ans){
			cout<<i<<" ";
		}

		cout<<"\n";

	}

}
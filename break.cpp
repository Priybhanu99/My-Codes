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
	cin>>t; 
	int s;
	cin>>s;
	while(t--){

		cin>>n;
		vector<int> a,b;
		bool equals = false;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			a.push_back(num);
		}

		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			b.push_back(num);
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if(s==1){
			
			map<int,bool> Map;

			bool flag = 1;
			for (int i = 0; i < n; ++i){
				if(a[i]>=b[i]){
					flag=0;
					cout<<"NO\n";
					break;
				}
				if(i==0){
					Map[a[i]] = 1;
					Map[b[i]] = 1;
				}else{
					if(Map.count(a[i])==0){
						cout<<"NO\n";
						flag = 0;
						break;
					}
					Map[b[i]] = 1;
				}

			}	
			if(flag){
				cout<<"YES\n";
			}			
		}else{
			map<int,bool> Map;

			bool flag = 1;
			for (int i = 0; i < n; ++i){
				
				if(i==0){
					Map[a[i]] = 1;
					Map[b[i]] = 1;
				}else{
					if(Map.count(b[i]==0)){
						cout<<"NO\n";
						flag = 0;
					}
					//Map[b[i]] = 1;
					Map[a[i]] = 1;
				}

			}	
			if(flag){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}

	}
}



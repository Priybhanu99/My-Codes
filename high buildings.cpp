#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

void printarr(vector<int> arr){
	for(auto i:arr){
		cout<<i<<" ";
	}
}


vector<vector<int>> ans;

void permutation(vector<int> a,int n){
	if(n<0){
		ans.push_back(a);
		return;
	}

	for(int i=1;i<=9;i++){
		a[n] = i;
		permutation(a,n-1);
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t,tc=0;
	cin>>t; while(t--){

		tc++;
		int n,a,b,c;

		cin>>n>>a>>b>>c;

		ans.clear();

		cout<<"Case #"<<tc<<": ";
		bool flag = true;

		vector<int> arr(n);
		permutation(arr,n-1);


		for(auto x:ans){
			int counta = 0,countb = 0;
			int countc = 0;
			int height = 0;
			map<int,int> m;
			for (int i = 0; i < n; ++i)
			{
				if(x[i]>=height){
					counta++;
					m[i]++;
					height = max(height,x[i]);
				}
			}


			height = 0;
			for(int i=n-1;i>=0;i--){
				if(x[i]>=height){
					if(m.count(i)!=0){
						countc++;
					}
					countb++;
					height = max(height,x[i]);
				}
			}

			if(counta==a && countb == b && countc == c){
				printarr(x);
				flag = false;
				break;
			}
			// for(auto ele:x){
			// 	cout<<ele<<" ";
			// }
			// cout<<"\n";
		}

		if(flag){
			cout<<"IMPOSSIBLE";
		}

		cout<<"\n";



	}

}
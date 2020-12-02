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

		int n,k;
		cin>>n>>k;

		int a[n*k];
		for(int i=0;i<n*k;i++){
			cin>>a[i];
		}



		// int sum1 = 0;
		// int sp = n/2 -1;
		// for(int i=sp;i<n*k;i+=n){
		// 	sum1 += a[i];
		// }

		// if(n%2==0 && k%2==0){
		// 	cout<<sum1<<"\n";
		// 	continue;
		// }
		int sum = 0;

		// for(int i=index;i>=0;i-=)
		// int end = n*k-1;
		// vector<vector<int>> ans;
		// for(int i=0;i<k;i++){
		// 	vector<int> temp;
		// 	temp.pb(a[i]);
		// 	int count = n-1;
		// 	while(count){
		// 		temp.pb(a[end]);
		// 		end--;
		// 		count--;
		// 	}
		// 	sort(temp.begin(), temp.end());
		// 	ans.pb(temp);
		// }

		int start = 0;
		int end = n*k-1;

		int count = 0;

		while(count<k){
			int x = n/2;
			if(n%2==0){
				x--;
			}

			vector<int> temp;
			for(int i=start;i<start+x;i++){
				temp.pb(a[i]);
				// start++;
			}

			start+=x;

			int count1 = n-x;
			while(count1--){
				temp.pb(a[end--]);
			}

			sort(temp.begin(), temp.end());
			sum += temp[x];

			count++;
		}

		// for(auto i:ans){
		// 	// for(auto x:i){
		// 	// 	cout<<x<<" ";
		// 	// }
		// 	int y = i.size()/2;
		// 	if(i.size()%2==0){
		// 		y--;
		// 	}
		// 	sum += (i[y]);
		// 	// cout<<"\n";
		// }

		// cout<<"sum is:";

		cout<<sum<<"\n";

	}

}

// 165
// 108
// 145
// 234
// 11
// 3

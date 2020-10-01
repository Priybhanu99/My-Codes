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

	int n,k,s;
	cin>>n>>k>>s;

	bool flag = true;

	int curr_pos = 1;

	list<int> ans;`

	if(s<k){
		cout<<"NO\n";
		return 0;
	}
	
	int x = s/9;
	int y = 9*x;

	int rem = s-y;
	int count = x;

	if(count>k){
		cout<<"NO\n";
		return 0;
	}

	k-=count;

	int z = 0;
	// if(rem!=0){
	// 	if(x%2==1){
	// 		curr_pos += s;
	// 		s = 0;
	// 		k--;
	// 		ans.push_back(curr_pos);

	// 	}else if(curr_pos==n){
	// 		curr_pos -= s;
	// 		s = 0;
	// 		k--;
	// 		ans.push_back(curr_pos);
	// 	}


	// }


	if(k<0){
		cout<<"NO\n";
	}else{
		
		if(k==0){
			cout<<"YES\n";
			int curr = 1;
			for(int i=0;i<x;i++){
				if(curr==1){
					cout<<"10 ";
					curr = 10;
				}else{
					cout<<"1 ";
					curr = 1;
				}
			}
			cout<<"\n";
		}else{
			
			cout<<"YES\n";
			for(auto i:ans){
				cout<<i<<" ";
			}
			cout<<"\n";
		}




	}
}


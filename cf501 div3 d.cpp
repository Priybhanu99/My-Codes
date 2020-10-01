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
	
	while(s>=n-1){
		s -= n-1;
		k--;
		if(curr_pos==1){
			curr_pos = n;
			ans.push_back(curr_pos);
		}else{
			curr_pos = 1;
			ans.push_back(curr_pos);
		}
	}
	

	// if(k<=0){
	// 	cout<<"NO\n";
	// }

	if(s!=0){
		if(curr_pos==1){
			curr_pos += s;
			s = 0;
			k--;
			ans.push_back(curr_pos);

		}else if(curr_pos==n){
			curr_pos -= s;
			s = 0;
			k--;
			ans.push_back(curr_pos);
		}
	}


	if(k<0){
		cout<<"NO\n";
	}else{
		
		if(k==0){
			cout<<"YES\n";
			for(auto i:ans){
				cout<<i<<" ";
			}
			cout<<"\n";
		}else{
			int rem = ans.front();
			curr_pos = 2;

			int y = ans.front();
			ans.pop_front();

			auto itr = ans.begin();
			int x = 0;
			while(x<k){
				ans.insert(itr,curr_pos);
				curr_pos++;

				x++;
			}
			ans.insert(itr,y);

			cout<<"YES\n";
			for(auto i:ans){
				cout<<i<<" ";
			}
			cout<<"\n";
		}




	}
}


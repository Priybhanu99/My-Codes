#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

void func(string &a,string &b,int index,int n){

	string temp;

	for (int i = 0; i <= index; ++i)
	{
		if(a[i]=='0'){
			temp+='1';
		}else{
			temp+='0';
		}
	}
	// cout<<"index :"<<index<<" "<<temp<<"\n";

	reverse(temp.begin(), temp.end());

	for (int i = 0; i <= index; ++i)
	{
		a[i] = temp[i];
	}
}

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

		string a,b;
		cin>>a>>b;

		vector<int> ans;
		int i = n-1;
		while(i>=0){

			if(a[i]==b[i]){
				i--;
			}else{
				if((a[0]==b[0])){
					ans.push_back(i+1);
					func(a,b,i+1,n);
					// i--;
					
				}else{
					ans.push_back(1);
					func(a,b,0,n);
					// ans.push_back(i+1);
					// func(a,b,i,n);
					// i--;
				}
				// i--;
			}
			// cout<<a<<" "<<b<<"\n";
		}

		cout<<ans.size()<<" ";
		for(auto ele:ans){
			cout<<ele<<" ";
		}
		// cout<<"\n";

		cout<<"\n";

	}

}
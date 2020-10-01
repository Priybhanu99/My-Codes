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

		string s;
		cin>>s;

		// cout<<s.substr(0,7)<<"....";

		// cout<<s;
		string ans  = "abacaba";

		bool flag = 1;

		int count = 0;
		for (int i = 0; i <= n-7; ++i)
		{
			string temp = s.substr(i,7);

			if(temp==ans){
				count++;
			}
		}

		if(count==1){
			cout<<"YES\n";

			//fill
			for (int i = 0; i < n; ++i)
			{
				if(s[i]=='?'){
					s[i]='x';
				}
			}
			cout<<s<<"\n";
			continue;
		}

		if(count>=2){
			cout<<"NO\n";
			continue;
		}

		for (int i = 0; i <= n-7; ++i)
		{
			if(s[i]!='a' && s[i]!='?'){
				continue;
			}

			string temp1 = s.substr(i,7);
			int x = 0;

			bool ok = true;
			for(int j=i;j<i+7;j++){
				if(s[j]!=ans[x]){
					if(s[j]!='?'){
						ok = false;
						break;
					}else{
						s[j] = ans[x];
						flag = 0;
					}
				}

				x++;
			}

			if(s.substr(i,7)==ans){
				break;
			}else{
				int index = 0;
				for(int y = i;y<i+7;y++){
					s[y] = temp1[index++];
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='?'){
				s[i]='x';
			}
		}

		count = 0;
		// if(flag)
		for (int i = 0; i <= n-7; ++i)
		{
			string temp = s.substr(i,7);

			if(temp==ans){
				count++;
			}
		}

		if(count!=1){
			cout<<"NO\n";
			// cout<<s<<"\n";
		}else{
			cout<<"YES\n";
			cout<<s<<"\n";
		}



	}

}
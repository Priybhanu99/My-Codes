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

	int t;
	int x = 0;

	cin>>t; while(t--){

		x++;
		string str;
		cin>>str;
		//string ans = solve(str,"",str.size(),0,0);
		string ans;

		for(int i=0;i<str.size();i++){
			
			if(i==0){

				int ob = stoi(to_string(str[0]))-48;
				for(int z = 0;z<ob;z++){
					ans+="(";
				}

				ans+=str[i];
				if(str.size()!=1){
					int cb = stoi(to_string(str[i])) - stoi(to_string(str[i+1]));

					for(int z=0;z<cb;z++){
						ans+=")";
					}
				}

			}else{


				int ob = stoi(to_string(str[i]))- stoi(to_string(str[i-1]));
				for(int z = 0;z<ob;z++){
					ans+="(";
				}

				ans+=str[i];

				if(i!=str.size()-1){
					int cb = stoi(to_string(str[i])) - stoi(to_string(str[i+1]));

					for(int z=0;z<cb;z++){
						ans+=")";
					}
				}

			}

		}

		
		int y = stoi(to_string(str[str.size()-1]))-48;
		for (int i = 0; i < y; ++i)
		{
			ans += ")";
		}
		

		cout<<"Case #"<<x<<": "<<ans<<"\n";

	}
}


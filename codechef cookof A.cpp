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
	cin>>t; while(t--){

		cin>>n;
		string str;
		cin>>str;

		// cout<<str;

		int x=0;
		int y = 0;

		for (int i = 0; i < n; ++i)
		{
			if(i==0){
				char ch = str[i];
				if(ch=='L'){
					x -= 1;
				}else if(ch=='U'){
					y += 1;
				}else if(ch=='R'){
					x += 1;
				}else{
					y -= 1;
				}
			}else{
				char c = str[i-1];
				if(c=='L'&&str[i]=='L'){

				}else if(c=='L'&&str[i]=='R'){

				}else if(c=='R'&&str[i]=='R'){

				}else if(c=='R'&&str[i]=='L'){

				}else if(c=='U'&&str[i]=='U'){

				}else if(c=='U'&&str[i]=='D'){
					
				}else if(c=='D'&&str[i]=='D'){
					
				}else if(c=='D'&&str[i]=='U'){
					
				}
				else{
					char ch = str[i];
					if(ch=='L'){
						x -= 1;
					}else if(ch=='U'){
						y += 1;
					}else if(ch=='R'){
						x += 1;
					}else{
						y -= 1;
					}
				}
			}
		}

		cout<<x<<" "<<y<<"\n";

	}
}


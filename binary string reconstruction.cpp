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

		string s;
		cin>>s;

		int x;
		cin>>x;

		string w(s.size(),'a');

		bool flag = true;
		for(int i=0;i<s.size();i++){
			if(s[i]=='1'){
				if(i-x>=0){
					if(w[i-x]=='0'){
						flag = false;
						break;
					}
					w[i-x] = '1';
				}
				if(i+x<s.size()){
					if(w[i+x]=='0'){
						flag = false;
						break;
					}
					w[i+x] = '1';
				}
			}else{
				if((i-x>=0 && w[i-x]=='1' )|| (i+x<s.size() && w[i+x]=='1')){
					flag = false;
					break;
				}
				if(i-x>=0){
					
					w[i-x] = '0';
				}
				if(i+x<s.size()){
					
					w[i+x] = '0';
				}
			}
		}

		if(flag){
			for (int i = 0; i < s.size(); ++i)
			{
				if(w[i]=='a'){
					w[i] = '0';
				}

				if((i-x>=0 && s[i-x]=='0' ) || (i+x<s.size() && s[i+x]=='0')){
					if(w[i]=='1'){
						flag = false;
						break;
					}
				}
			}
			cout<<w<<"\n";
		}else{
			cout<<"-1\n";
		}
		// if(!flag){cout<<"-1\n";}

		// else{
		// 	for (int i = 0; i < s.size(); ++i)
		// 	{
		// 		if(w[i]=='a'){
		// 			if((i-x>=0 && s[i-x]=='1') ||( i+x<s.size() && s[i+x]=='1')){
		// 				w[i] = '1';
		// 			}else{
		// 				w[i] = '0';
		// 			}
		// 		}
		// 	}
		// 	cout<<w<<"\n";
		// }

	}

}
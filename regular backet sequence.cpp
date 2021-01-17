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

		int o =0,c=0,temp=0,flag = 1;
		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i]=='('){
				o++;
			}else if(s[i]==')'){
				c++;
			}else if(s[i]=='?'){

				if(i==0){ 
					s[i] = '(';
					o++;
				}else{
					if((s[i-1]=='(' && s[i+1]==')') || (s[i-1]==')' && s[i+1]=='(')){
						flag = 0;
						break;
					}
					if(o<=c){
						s[i]='(';
						o++;
					}else{
						s[i]=')';
						c++;
					}
				}
			}
		}

		if(flag){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

}
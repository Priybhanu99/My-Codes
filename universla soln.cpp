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

		int a[3]={};//PRS
		
		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i]=='R'){
				a[0]++;
			}else if(s[i]=='P'){
				a[2]++;
			}else{
				a[1]++;
			}
		}

		int mxm = -1;
		int index = -1;
		for(int i=0;i<=2;i++){
			if(a[i]>mxm){
				mxm = a[i];
				index = i;
			}
		}

		char c;
		if(index==0){
			c = 'P';
		}else if(index==1){
			c = 'R';
		}else{
			c = 'S';
		}

		string ans1(s.size(),c);
		cout<<ans1<<"\n";


		
	}

}
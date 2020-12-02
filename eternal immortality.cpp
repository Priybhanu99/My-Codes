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

	int a,b;
	cin>>a>>b;

	if(b-a>=5){
		cout<<"0\n";
	}else{
		int ans = 1;
		for (int i = a+1; i <= b; ++i)
		{
			ans = (ans*i)%10;
		}
		cout<<ans<<"\n";
	}

}
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


	int n;
	cin>>n;

	string str;
	cin>>str;

	int count[n];
	memset(count,0,sizeof(count));
	for (int i = 0; i < n; i+=2)
	{
		if(str[i]!=str[i+1]){
			count[i] = 1;
		}else{
			count[i] = 2;
		}
	}

	int ans = 0;
	string output;
	for (int i = 0; i < n; i+= 2)
	{
		if(count[i]==2){
			ans+=1;
			output += "ab";
		}else{
			output = output + str[i] + str[i+1];
		}
	}

	cout<<ans<<"\n"<<output;
}


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
	//cin>>t; while(t--){

	int n,k;
	cin>>n>>k;

	string s;
	cin>>s;

	for (int j = 0; j < k; ++j)
	{
		string temp = s;
		for(int i=0;i<n-1;i++){
			if(s[i]=='B'&&s[i+1]=='G'){
				swap(temp[i],temp[i+1]);
			}
		}
		s = temp;
	}

	cout<<s<<"\n";

	//}

}
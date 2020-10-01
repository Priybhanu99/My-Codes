#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

int32_t main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t; while(t--)
	{
		int n;
		int answers=0;
		cin>>n;
		int remaining = 0;
		while(n>=10){
			answers += (n/10) * 10;
			remaining = n%10 + n/10;
			n = remaining;
		}
		answers += n;
		cout<<answers<<"\n";

	}
	return 0;
}
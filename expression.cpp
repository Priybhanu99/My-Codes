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

	int a,b,c;
	cin>>a>>b>>c;

	vector<int> arr;
	arr.push_back((a*b)+c);

	arr.pb(a*b*c);
	arr.pb(a+b+c);
	arr.pb((a+b)*c);
	arr.pb(a+(b*c));
	arr.pb(a*(b+c));
	arr.pb((a*b)+c);

	sort(arr.begin(), arr.end());
	cout<<arr[arr.size()-1];

	

}
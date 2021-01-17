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

	P a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].F>>a[i].S;
	}

	sort(a,a+n);

	multiset<int> s;
	int count = 0;

	for (int i = 0; i < n; ++i)
	{

		while(!s.empty() && (*s.begin())<=a[i].F){
			s.erase(s.begin());
			k++;
		}


		if(k>0){
			count++;
			cout<<i<<" ";
			k--;
			s.insert(a[i].S);
		}
	}
	cout<<count;



	//}

}
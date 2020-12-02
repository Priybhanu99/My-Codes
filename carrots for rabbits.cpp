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

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int ans = 0;
	// sort(a,a+n);

	int count = k-n;

	priority_queue<int> q;
	for (int i = 0; i < n; ++i)
	{
		q.push(a[i]);
	}

	while(count--){
		int temp = q.top();
		q.pop();
		if(temp%2){
			q.push(temp/2 + 1);
			q.push(temp/2);
		}else{
			q.push(temp/2);
			q.push(temp/2);
		}
	}

	while(!q.empty()){
		int temp = q.top();
		q.pop();

		ans += temp*temp;
	}

	cout<<ans<<"\n";
	//}

}
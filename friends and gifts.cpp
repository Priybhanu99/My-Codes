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
	int a[n+1];
	vector<int> rem;
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
		if(a[i]==0){
			rem.push_back(i);
		}
	}

	map<int,int> x,y;
	for (int i = 1; i <= n; ++i)
	{
		x[i] = a[i];
		y[a[i]] = i;
	}

	int x1 = 0;
	for(int i = 1; i <= n; ++i){
		if(x[i]!=0 && y.count(i)==0){
			x1 = i;
			break;
		}
	}

	int y1 = 0;

	for(int i = 1; i <= n; ++i){
		if(y[i]!=0 && x.count(i)==0){
			y1 = i;
			break;
		}
	}

	a[x1] = rem[rem.size()-1];
	a[y1] = rem[0];

	int count = 1;
	for (int i = 1;i<=n; ++i){
		if(a[i]==0){
			a[i] = rem[count];
			count++;
		}
	}
	
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}

	cout<<"\n";





}


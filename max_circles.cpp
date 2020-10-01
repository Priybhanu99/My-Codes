#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;

	int centre[n];
	int radius[n];

	for(int i=0;i<n;i++){
		cin>>centre[i];
		cin>>radius[i];
	}

	pair<int,int> x[n];
	for(int i=0;i<n;i++){
		x[i].first = centre[i]-radius[i];
		x[i].second = radius[i]+centre[i];
	}

	sort(x,x+n,cmp);

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<"sp :"<<x[i].first<<" ep :"<<x[i].second<<endl;
	// }

	//now the x iss sorted on the basis of their ending points and now what we need to do is
	//just pick the very first circle and include it into the answer
	int count = 0;
	int ep = x[0].second;//2
	for(int i=1;i<n;i++){
		if(ep>x[i].first){
			count++;
		}else{
			ep = x[i].second;
		}
	}

	cout<<count;
}


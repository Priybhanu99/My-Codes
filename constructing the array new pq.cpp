#include <bits/stdc++.h>
using namespace std;

#define int long long int

struct comparator{

	bool operator()(pair<int,int> const&p,pair<int,int> const&q){
		int l = p.second - p.first;
		int r = q.second - q.first;

		if(l==r){
			return p.first>q.first;
		}
		return l<r;
	}
};

int curr = 0;

void solve(int* a,int n){

	priority_queue<pair<int,int> ,vector<pair<int,int>>,comparator > q;

	int l=0;
	int r = n-1;

	if(l>r){
		return;
	}

	if(l==r){
		a[l] = curr++;
	}

	q.push({l,r});

	while(!q.empty()){
		pair<int,int> p = q.top();
		q.pop();
		int mid = (p.first+p.second)/2;
		a[mid] = curr++;

		if(mid+1<=r){
			q.push({mid+1,r});
		}
		if(mid-1>=l){
			q.push({l,mid-1});
		}


	}


}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int a[n];

		memset(a,0,sizeof(a));

		curr = 0;

		solve(a,n);

		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}

		cout<<"\n";
	}
}


#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second

struct Compare { 
	bool operator()(P const& p1, P const& p2) 
	{ 
	 
		int sz1 = p1.S-p1.F;
		int sz2 = p2.S-p2.F;
		if(sz1 != sz2){
			return sz1<sz2;
		}else{
			return p1.F > p2.F; 
		}

	} 
};

const int N = 200005;
int cnt;
int a[N];
int n;
void fun(int l, int r){
	if(r<l){
		return;
	}
	if(l<0 || r<0 || l>n-1 || r>n-1){
		return;
	}
	if(l == r){
        // if(a[l]!=0)
		a[l] = cnt++;
		return;
	}
	priority_queue< P, vector<P>, Compare> q; 
    // queue<P> q;
	q.push({l,r});
	while(!q.empty()){
		P temp = q.top();
		q.pop();
		l = temp.F;
		r = temp.S;
		int mid = (l+r)/2;
		a[mid] = (cnt++);
		if(r>=mid+1){
			q.push({mid+1,r});
		}
		if(mid-1>=l){
			q.push({l,mid-1});
		}

	}
}

int32_t main(){

	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif

	int t; cin>>t; while(t--)
	{
		int i,j,k,m,ans = 0,sum = 0;
		cin>>n;
        // int a[n];
		cnt = 1;
        // memset(a,0,sizeof(a));

        // q.push({0,n-1});
		fun(0,n-1);
		for(i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";



	}
	return 0;
}
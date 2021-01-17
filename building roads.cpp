#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

struct dsu{

	vector<int> p,sz;
	int comp;

	void init(int n){
		p.resize(n);
		sz.resize(n,0);//size of  components of given no
		iota(p.begin(),p.end(),0);
		comp = n;
	}

	int get_p(int x){
		return (x==p[x])?x:(p[x] = get_p(p[x]));
	}

	void unite(int x,int y){

		int sp1 = get_p(x);
		int sp2 = get_p(y);

		if(sp1!=sp2){
			p[sp1] = sp2;
			sz[sp2] += sp1;
			sz[sp1] = 0;
			comp--;
		}
	}


}G;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,m;
	cin>>n>>m;


	G.init(n);

	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;

		--x;
		--y;

		G.unite(x,y);
	}

	set<int> mp;
	for (int i = 0; i < n; ++i)
	{
		// int temp = G.get_p(i);
		// cout<<temp<<" ";
		mp.insert(G.get_p(i));
	}

	cout<<mp.size()-1<<"\n";

	int u = *mp.begin();
	auto itr = mp.begin();
	++itr;
	for(;itr!=mp.end();itr++){
		cout<<u+1<<" "<<(*itr)+1<<"\n";
	}



}
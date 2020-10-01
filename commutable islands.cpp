#include <bits/stdc++.h>
using namespace std;

#define int long long int

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


}g;

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	
	map<int,pair<int,int>> map;
	g.init(n+1);

	int ans = 0;
	for(auto i:map){
		int w = i.first;
		int x = i.second.first;
		int z = i.second.second;

		if(g.get_p(x)!=g.get_p(y)){
			ans += w;
			g.unite(x,y);
		}
	}

	cout<<ans;



	//}
}


#include <bits/stdc++.h>
using namespace std;

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


}s;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif
	
	int n;
	cin>>n;

	s.init(n);

	int t;
	cin>>t;
	while(t--){
		int x,y;
        cin>>x>>y;
		s.unite(x,y);
	}
	int ans = 1;
	for(auto i:s.sz){
		if(i!=0){
			ans *= (i+1);
		}

      //  cout<<i<<" ";
    }

 //   cout<<endl;

	cout<<ans;
}


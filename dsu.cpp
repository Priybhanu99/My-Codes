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
	for (int i = 0; i < n; ++i)
	{
		cout<<s.get_p(i)<<" ";
	}

	cout<<endl;

	s.unite(1,2);
	s.unite(2,4);
	for (int i = 0; i < n; ++i)
	{
		cout<<s.get_p(i)<<" ";
	}
	
}


#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5;
int p[N];

struct edges{
	int u,v;
	int w;
};

bool cmp(edges u,edges v){
	return u.w<v.w;
}

int getp(int x){
	if(x != p[x]){
		return p[x] = getp(p[x]);
	}else{
		return x;
	}
}

void unite(int x,int y){
	int xp = getp(x);
	int yp = getp(y);

	if(xp!=yp){
		p[xp] = yp;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	for (int i = 0; i < N; ++i)
	{
		p[i] = i;
	}
	int n;
	cin>>n;
	edges *edge = new edges[n];

	for(int i=0;i<n;i++){
		int u,v,w;
		cin>>u>>v>>w;
		edge[i].u = u;
		edge[i].v = v;
		edge[i].w = w;
	}

	sort(edge,edge+n,cmp);

	for (int i = 0; i < n; ++i)
	{
		edges e = edge[i];
		int xp = getp(e.u);
		int yp= getp(e.v);

		if(xp!=yp){
			cout<<"Edge taken :"<<e.u<<"-"<<e.v<<" of weight "<<e.w<<endl;
			unite(xp,yp);
		}
	}


}


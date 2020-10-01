#include <bits/stdc++.h>
using namespace std;

#define int long long int
int N = 1e5 + 1;
int mod = 1e9+7;
vector<int> primes;

void seive(){

	int a[N];
	int n = N;
	 // 0 means not prime, 1 means prime
	
	//traverse on all odd nos and mark them as prime
	for(int i=3;i<=n;i+=2) a[i] = 1;

		for(int i=3;i<=n;i++){
		if(a[i]==1){ //if number is prime then mark all its multiple as not prime
			
			for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
				a[j] = 0;
			}
		}
	}

	a[1] = 0;
	a[2] = 1; 

	for(int i=2;i<n;i++){
		if(a[i]==1) primes.push_back(i);
	}

}

void no_of_factors(vector<int> a){
	map<int,int> count1;

	//cout<<"array :";
	for(int i=0;i<a.size();i++){
		//cout<<a[i]<<" ";
		int num = a[i];

		for(auto prime:primes){

			if(num<1){
				break;
			}

			if(num%prime==0){
				while(num%prime==0){
					count1[prime] ++;
					num /= prime;
				}
			}
		}
	}

	int ans = 1;
	//cout<<"\nfactors :";
	for(auto i:count1){
		//cout<<i.first<<" "<<i.second<<"\n";
		ans = ((ans%mod)*((i.second+1)%mod))%mod;
	}

	cout<<ans%mod;

}


class graph{

public:
	int V;
	map<int,vector<int> > gr;
	map<int,int> values;
	bool flag = true;
	bool found = true;

	void addEdge(int u,int v){

		gr[u].push_back(v);
		gr[v].push_back(u);

	}

	void dfs(int s,int d,map<int,bool> &visited,vector<int> &path,int path_index){

		if(flag==false){
			return;
		}

		//cout<<"src : "<<s<<" dst : "<<d<<"\n";
		visited[s] = true;
		path[path_index] = s;
		path_index++;

		if(s==d){
			flag = false;
			// int ans = 1;
			// for(int i=0;i<path_index;i++){
			// 	//cout<<path[i]<<" ";
			// 	ans = (ans*values[path[i]])%mod;
			// }
			// cout<<ans;

			vector<int> ans;
			for(int i=0;i<path_index;i++){
				ans.push_back(values[path[i]]);
			}

			no_of_factors(ans);
			return;
		}


		for(auto children : gr[s]){
			if(!visited[children]){
				dfs(children,d,visited,path,path_index);
			}
		}
		visited[s] = false;
		path_index--;
	}


	void dfs_helper(int s,int d){
		map<int,bool> visited;
		vector<int> path(V);
		int path_index = 0;

		flag = true;
		dfs(s,d,visited,path,path_index);
		
		
	}
};

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	seive();
	cin>>t; while(t--){

		cin>>n;

		graph g;
		g.V = n;
		
		for (int i = 0; i < n-1; ++i)
		{
			int x,y;
			cin>>x>>y;

			g.addEdge(x,y);
		}

		for(int i=0;i<n;i++){
			int num;
			cin>>num;

			g.values[i+1] = num;
		}

		int q;
		cin>>q;

		while(q--){
			int s,d;
			cin>>s>>d;
			if(n==1){
				//cout<<"value : "<<g.values[1];
				int num = g.values[1];
				int ans = 0;
				for(int i=1;i*i<=g.values[1];i++){
					if(num%i==0){
						if(i*i==num){
							ans += 1;
						}else{
							ans += 2;
						}
					}
				}
				cout<<ans%mod<<"\n";
			}else{
				g.dfs_helper(s,d);
				cout<<"\n";
			}
		}


	}
}






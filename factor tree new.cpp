#include <bits/stdc++.h>
using namespace std;

#define int long long int
int N = 1e5;
int mod = 1e9+7;



void no_of_factors(vector<int> a){
	map<int,int> count1;


	//cout<<"array :";
	for(int i=0;i<a.size();i++){
		//cout<<a[i]<<" ";
		int num = a[i];
		int temp = num;
	    while(temp%2 == 0){
	        temp = temp/2;
	        count1[2] = (count1[2] + 1)%mod;
	    }
	    for(int i=3;i*i<=num;i+=2){
	        if(temp == 1){
	            break;
	        }

	        while(temp%i == 0){
	            temp = temp/i;
	            count1[i] = (count1[i] + 1)%mod;
	        }
	    }
	    if(temp!=1){
	        count1[temp] = (count1[temp]+1)%mod;
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
	cin>>t; while(t--){

		cin>>n;

		graph g;
		g.V = n;
		
		for (int i = 0; i < n-1; ++i)
		{
			int x,y;
			cin>>x>>y;

			g.addEdge(x,y);
			g.addEdge(y,x);
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

			g.dfs_helper(s,d);
			cout<<"\n";
		}


	}
	return 0;
}
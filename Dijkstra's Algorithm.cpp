#include <bits/stdc++.h>
using namespace std;

#define int long long int

map<int,vector<pair<int,int>>> gr;

int dijkstra(int src){
	set<pair<int,int>> s;

	map<int,int> distance;


	distance[src] = 0;
	for(auto i:gr){
		distance[i.first] = INT_MAX;
	}

	s.insert(make_pair(0,src));

	while(!s.empty()){
		pair<int,int> p = *(s.begin());

		int dist = p.first;

		s.erase(s.begin());
		for(auto i:gr[p.second]){
			if(dist + i.second < distance[i.first]){
				distance[i.first] = dist  + i.second;

				auto index = s.find(i.first);
				if(index!=s.end()){
					s.erase(index);
					s.insert(make_pair(distance[i.first],i.first));
				}
			}


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
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//}
}


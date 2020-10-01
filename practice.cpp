#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

template<typename T>
class Graph{

	map<T, list<pair<T,int>> > m;
public:
	void addedge(T u,T v,int dist){
		m[u].push_back(make_pair(v,dist));
		m[v].push_back(make_pair(u,dist));
	}

	void display(){

		for(auto i:m){
			cout<<i.first<<" ";
			for(auto children:i.second){
				cout<<children.first<<" "<<children.second<<",";
			}
			cout<<"\n";
		}
	}

	void dijkstra(T src){

		map<T,int> dist;
		for(auto i:m){
			dist[i.first] = INT_MAX;
		}

		dist[src] = 0;
		set<pair<int,T> > s;
		s.insert(make_pair(0,src));

		while(!s.empty()){

			auto node = *(s.begin());

			for(auto i:m[node.second]){

				if(node.first+i.second < dist[i.first]){
					//update the set values
					auto check = s.find(make_pair(dist[i.first],i.first));
					if(check!=s.end()){
						s.erase(make_pair(dist[i.first],i.first));

						s.insert(make_pair(node.first + i.second , i.first));
						dist[i.first] = node.first + i.second;
					}
				}
			}

		}

		for(auto i: dist){
			cout<<i.second<<" "<<i.first<<"\n";
		}
	}
};

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

	Graph<string> g;
	g.addedge("A","B",1);
	g.addedge("A","C",2);
	g.addedge("B","D",2);
	g.display();

	g.dijkstra("A");

	//about dijstra algo:
	// prepare a set and a map containing the distances of all the nodes initialised with INT_MAX
	//now select the edge with minimum woeght and update all the adjacent nodes of the selected edge
	//This algorithm takes ElogV times.
	//E for selecting every edge
	//logV for finding in the set

}
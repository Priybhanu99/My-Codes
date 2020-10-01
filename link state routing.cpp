#include<bits/stdc++.h>
using namespace std;

int V;

int distanceance_between_routers(int distance[], bool set_to_check_for_routers[]) 
{ 
	
	int min = INT_MAX, min_index; 

	for (int v = 0; v < V; v++) {
		if (set_to_check_for_routers[v] == false && 
			distance[v] <= min) 
			min = distance[v], min_index = v; 
	}

	return min_index; 
} 

void path_between_routers(int parent[], int j) 
{ 


	if (parent[j] == - 1) 
		return; 

	path_between_routers(parent, parent[j]); 

	printf("%d ", j); 
} 


int main() 
{ 

		 // #ifndef ONLINE_JUDGE
			// freopen("input.txt","r",stdin);
			// freopen("output.txt","w",stdout);
		 //    #endif


	cout<<"Enter the no of routers :";
	int n;
	cin>>n;

	int routers[n][5];
	cout<<"Enter the neighbours of each router :";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>routers[i][j];
		}
	}

	V = n;
	int distance[V]; 

	bool set_to_check_for_routers[V]; 

	int parent[V]; 

	for (int i = 0; i < V; i++) 
	{ 
		parent[0] = -1; 
		distance[i] = INT_MAX; 
		set_to_check_for_routers[i] = false; 
	} 

	distance[src] = 0; 

	for (int count = 0; count < V - 1; count++) 
	{ 

		int u = distanceance_between_routers(distance, set_to_check_for_routers); 

		set_to_check_for_routers[u] = true; 

		for (int v = 0; v < V; v++) 
			if (!set_to_check_for_routers[v] && routers[u][v] && 
				distance[u] + routers[u][v] < distance[v]) 
			{ 
				parent[v] = u; 
				distance[v] = distance[u] + routers[u][v]; 
			} 
		} 

		int src = 0; 
		cout<<"Routers\t distanceance\tPath"; 
		for (int i = 1; i < V; i++) 
		{ 
			printf("\n%d -> %d \t\t %d\t\t%d ", 
				src, i, distance[i], src); 
			path_between_routers(parent, i); 
		} 
		return 0; 
	} 
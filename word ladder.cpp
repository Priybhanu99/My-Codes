#include <bits/stdc++.h>
using namespace std;

#define int long long int

int solve(string start,set<string> dict,string target){


	if(dict.count(target)==0){
		return -1;
	}


	queue<string> q;
	q.push(start);

	map<string,int> distance;
	distance[start] = 0;

	while(!q.empty()){
		string temp = q.front();
		q.pop();


		string s = temp;


		for(int i=0;i<temp.size();i++){

			char ch = temp[i];
			for(char c='A';c<='Z';c++){
				temp[i] = c;
				// cout<<temp<<",";
				if(dict.count(temp)!=0 && distance.count(temp)==0){
					distance[temp] = 1+distance[s];
					q.push(temp);
				}
			}
			// cout<<"\n";
			temp[i] = ch;
		}
	}

	// for(auto i:distance){
	// 	cout<<i.first<<" "<<i.second<<"\n";
	// }
	return distance[target]+1;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	
	string start,target;
	cin>>start>>target;

	set<string> s;
	for (int i = 0; i < 7; ++i)
	{
		string temp;
		cin>>temp;

		s.insert(temp);
	}

	cout<<solve(start,s,target);
}


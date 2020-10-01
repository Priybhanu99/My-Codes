#include <bits/stdc++.h>
using namespace std;

#define int long long int


int solve(string start,string target,set<string> s){

	if(set.find(start) == set.end()){
		return 0;
	}


	queue<string> q;
	q.push(start);

	int level = 0;

	while(!q.empty()){

		level++;

		string temp = q.front();
		q.pop();

		if(temp==target){
			return level;
		}

		for(int pos = 0;pos<temp.size();pos++){

			char ch = temp[pos];
			for(char c='a';c<='z';c++){
				temp[pos] = c;

				if(s.count(temp)!=0){
					q.push(temp);
				}
			}

			temp[pos] = ch;
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


#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	    #endif
	int t,k;
	cin>>t>>k;

	priority_queue<int> q;

	while(t--){
		int n;
		cin>>n;
		
		if(n==1){
			int x,y;
			cin>>x>>y;
			int dist = x*x + y*y;
			if(q.size()==k){
				if(dist<q.top()){
					q.pop();
					q.push(dist);
				}
			}else{
				q.push(dist);
			}
		}else{
			cout<<q.top()<<endl;
		}
	}
}


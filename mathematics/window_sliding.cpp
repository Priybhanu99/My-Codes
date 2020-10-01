#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	//cin>>t;
	//while(t--){

		cin>>n;
		int a[n];
		int k;
		cin>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		deque<int> q;
		cout<<"hi";
		for(int i=0;i<k;i++){
			while(!q.empty() && a[q.back()]>a[i]){
				q.pop_back();
			}
			q.push_back(i);
		}
		cout<<a[q.front()]<<endl;

		for (int i = k; i < n; ++i)
		{
			while(!q.empty() && a[q.back()]>a[i]){
				q.pop_back();
			}
			q.push_back(i);

			//before printing we check if the front element in the queue is
			//from current window or the previous window
			if(q.front()==i-k){
				q.pop_front();
			}
			cout<<q.front()<<endl;
		}


	//}
}


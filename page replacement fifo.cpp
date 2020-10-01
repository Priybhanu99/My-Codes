#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;

	int pages[n];
	for(int i=0;i<n;i++){
		cin>>pages[i];
	}

	int frames;
	cin>>frames;

	unordered_set<int> s;
	queue<int> q;

	int faults = 0;

	for (int i = 0; i < n; ++i)
	{
		if(frames>s.size()){
			
			auto itr = s.find(pages[i]);

			if(itr==s.end()){
				s.insert(pages[i]);
				q.push(pages[i]);
				faults++;
			}
		}else{

			auto itr = s.find(pages[i]);
			if(itr==s.end()){
				int num = q.front();
				s.erase(num);
				q.pop();
				s.insert(pages[i]);
				q.push(pages[i]);
				faults++;
			}
		}
	}

	cout<<faults;
}


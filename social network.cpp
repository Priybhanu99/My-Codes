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

	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	list<int> seq;
	set<int> s;

	for(int i=0;i<n;i++){
		if(s.size()==k){
			if(s.count(a[i])==0){
				int no = seq.back();
				seq.pop_back();
				s.erase(no);
				seq.push_front(a[i]);
				s.insert(a[i]);
			}
		}else{
			if(s.count(a[i])==0){
				s.insert(a[i]);
				seq.push_front(a[i]);
			}
		}
	}

	cout<<s.size()<<"\n";
	for(auto i:seq){
		cout<<i<<" ";
	}


}


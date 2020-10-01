#include <bits/stdc++.h>
using namespace std;

#define int long long int

void print_pages(set<int> s){
	for(auto itr = s.begin();itr!= s.end();itr++){
		cout<<*itr<<" ";
	}

	cout<<"\n";
}

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
	for (int i = 0; i < n; ++i)
	{
		cin>>pages[i];
	}

	int frames;
	cin>>frames;

	int faults = 0;

	set<int> set;

	for(int i=0;i<n;i++){

		if(set.size()<frames){
			set.insert(pages[i]);
			faults++;
		}else{
			//if it is a hit/miss
			auto itr = set.find(pages[i]);
			if(itr==set.end()){
				map<int,int> index;
				for(auto x = set.begin();x!=set.end();x++){
					index[*x] = INT_MAX;
				}

				for(int j=i+1;j<n;j++){
					index[pages[j]] = j;
				}

				int minm = 0;
				int val = 0;

				for(auto x:index){
					if(x.second>minm){
						minm = x.second;
						val = x.first;
					}
				}

				set.erase(val);
				set.insert(pages[i]);
				faults++;
			}
		}

		//print_pages(set);
	}

	cout<<faults;
}


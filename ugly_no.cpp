#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 10005;
set<int> ans;

void generateseq(){

	set<int> :: iterator itr;
	int a[] = {2,3,5};
	ans.insert(1);
	ans.insert(2);
	ans.insert(3);
	ans.insert(5);

	itr = ans.begin();

	for (int i=0;i<N;i++)
	{

		for(int j=0;j<=2;j++){
			ans.insert((*itr)*a[j]);
		}
		++itr;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	generateseq();
	cin>>t; while(t--){
		int n;
		cin>>n;

		set<int> :: iterator itr = ans.begin();
		for(int i=0;i<n-1;i++){
			++itr;
		}
		cout<<*itr<<endl;
	}
}


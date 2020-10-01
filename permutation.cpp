#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<vector<int>> func(vector<int> a,int i,int n){

	if(i==n){
		vector<vector<int> > temp;
		temp.push_back(a);
		return temp;
	}

	for(int x=i;x<n;x++){
		swap(a[i],a[x]);
		func(a,i+1,n);
		swap(a[i],a[x]);
	}



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

	vector<int> a(n);


}


#include<bits/stdc++.h>
using namespace std;

int main(){

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif

	
	int n;
	cin>>n;

	int a[n];

	int count = 0;
	vector<int> ans;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0){
			count ++;
		}else{
			ans.push_back(a[i]);
		}
	}

	for(auto i:ans){
		cout<<i<<" ";
	}

	for(int i=0;i<count;i++){
		cout<<"0 ";
	}

}
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n;
	//cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int item;
		cin>>item;

		vector<int> one;
		one.push_back(a[0]);
		int i;
		for(i=1;i<n;i++){
			if(a[i]<a[i-1]) break;
			one.push_back(a[i]);
		}

		int index;
		//apply binary search in both subarrays
		if(binary_search(a+i,a+n,item)){
			index = lower_bound(a+i,a+n,item) - a;
		}
		else{
			index = lower_bound(one.begin(), one.end().item)-one.begin();
		}

		cout<<index;



	//}
}


#include <bits/stdc++.h>
using namespace std;

int main(){
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

		//set for storing the distinct elements in the array

	set<int> s;

	int j=0,sum=0;

	for(int i=0;i<n;i++){

		while(j<n && s.find(a[j])==s.end()){

			s.insert(a[j]);
			j++;

		}

		sum += ((j-i)*(j-i+1))/2;
		s.erase(a[i]);

	}

	cout<<sum;

	//}
}


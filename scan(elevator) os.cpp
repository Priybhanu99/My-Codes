#include<bits/stdc++.h>
using namespace std;

int main(){

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif


	int n;
	cin>>n;

	int head;
	cin>>head;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	sort(a,a+n);
	int index = 0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]<=head){
			index++;
		}
	}

	cout<<"Sequence :\n";


	int sum = 0;
	int ptr = head;


	// cout<<index<<"-";
	for(int i=index-1;i>=0;i--){
		cout<<a[i]<<",";
		sum += abs(a[i]-ptr);
		ptr = a[i];
	}

	cout<<"0,";
	sum += ptr;
	ptr = 0;

	for(int i=index;i<n;i++){
		cout<<a[i]<<",";
		sum += a[i]-ptr;
		ptr = a[i];
	}

	cout<<"\n";
	cout<<"Total number of seek operations:"<<sum;


}




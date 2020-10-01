#include<bits/stdc++.h>
using namespace std;

int main(){

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	   #endif

	int n;
	cin>>n;

	vector<pair<int,bool> >a(n);
	for (int i = 0; i < n; ++i)
	{	

		cin>>a[i].first;
		a[i].second = true;
	}

	int head;
	cin>>head;

	int sum = 0;
	int count = 0;

	cout<<"Seek Sequence:\n";
	while(count<n){

		int num = 0;
		int mn = INT_MAX;
		int index = 0;
		for (int i = 0; i < n; ++i)
		{
			if(a[i].second==true){
				if(abs(head-a[i].first)<mn){
					mn = abs(head-a[i].first);
					num = a[i].first;
					index = i;
				}
			}
		}

		cout<<num<<",";
		head = num;
		sum += mn;
		count++;
		a[index].second = false;
	}
	cout<<"\n";
	cout<<"Total no of seek operations :"<<sum;



}
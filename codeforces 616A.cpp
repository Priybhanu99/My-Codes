#include <bits/stdc++.h>
using namespace std;

#define int long long int
int sum = 0;

void display(vector<int> &a){
	for(auto i:a){
		cout<<i;
	}
	cout<<endl;
}

void removelast(vector<int> &a){
	while(a[a.size()-1]%2!=0){
		a.erase(a.begin() + a.size()-1);
	}
}

void sumeven(vector<int> &a){
	int index=0;
	for(auto i:a){
		if(i%2!=0){
			a.erase(a.begin() + index);
			sum -= a[index];
		}
		index++;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		cin>>n;
	//	int sum = 0;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			char ch;
			cin>>ch;
			a[i] =ch-'0';
			sum += a[i];
		}

		while(sum%2!=0 && a[a.size()-1]%2==0){
			//making last no odd
			while(a[a.size()-1]%2!=0){
				sum -= a[a.size()-1];
				removelast(a);
			}
			if(a.size()==0){
				cout<<"-1"<<endl;
				continue;
			}

			if(sum%2==0){

			}

		}

		display(a);


	





	}
}


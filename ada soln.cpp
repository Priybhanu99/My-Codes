#include <bits/stdc++.h>
using namespace std;

#define int long long int

void print_initialans(){

	cout<<"8 8\n";
	cout<<"7 7\n";
	cout<<"6 8\n";
	cout<<"1 3\n";
	cout<<"3 1\n";
	cout<<"8 6\n";
	cout<<"7 5\n";
	cout<<"4 8\n";
	cout<<"1 5\n";
	cout<<"5 1\n";
	cout<<"8 4\n";
	cout<<"7 3\n";
	cout<<"2 8\n";
	cout<<"1 7\n";
	cout<<"7 1\n";
	cout<<"8 2\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int r,c;
		cin>>r>>c;

		if(r!=c){
			int a = (r+c)/2;
			cout<<"18\n";
			cout<<a<<" "<<a<<"\n";
			cout<<"1 1\n";
			print_initialans();
		}if(r==c){
			if(r==1){
				cout<<"16\n";
				print_initialans();
			}else{
				cout<<"17\n";
				cout<<"1 1\n";
				print_initialans();
			}
		}
	}
}


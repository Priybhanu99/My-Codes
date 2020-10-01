#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int x,y,z;
		cin>>x>>y>>z;

		//a b c
		// vector<int> per{x,y,z};
		// sort(per.begin(), per.end());

		// bool flag = true;

		// do{
		// 	int a = per[0];
		// 	int b = per[1];
		// 	int c = per[2];
		// 	cout<<a<<" "<<b<<" "<<c<<"\n";
		// 	if(x == max(a,b) && y == max(a,c) && z==max(b,c)){
		// 		flag = false;
		// 		cout<<"YES\n";
		// 		cout<<a<<" "<<b<<" "<<c<<"\n";
		// 		break;
		// 	}
		// }
		// while(next_permutation(per.begin(), per.end()));


		// if(flag){
		// }

		// cout<<"\n\n";

		if(y==z){
			if(x>y){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
				cout<<1<<" "<<x<<" "<<y<<"\n";
			}
		}else if(x==z){
			if(y>z){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
				cout<<1<<" "<<x<<" "<<y<<"\n";
			}
		}else if(x==y){
			if(z>x){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
				cout<<y<<" "<<z<<" "<<1<<"\n";
			}
		}else{
			cout<<"NO\n";
		}

		// map<int,int> m;
		// m[x]++;
		// m[y]++;
		// m[z]++;

		// if(m.size()==3){
		// 	cout<<"NO";
		// }



	}

}





//3 2 3
//3 2 1
//2 3 1

//3 2 4
//(3,2) (3) (2)

//1 10 10
//1 1   
#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	//

	int n;
	cin>>n;

	list<int> a;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin>>num;

		a.push_back(num);
	}

	string ans = "";
	int curr = 0;

	vector<int> temp;

	temp.push_back(0);

	while(1){

		//cout<<"hi";
		int x = a.front();
		int y = a.back();

		//cout<<x<<" "<<y<<"\n";
		if(x<y && x>temp.back()){

			ans += 'L';
			a.pop_front();
			temp.push_back(x);

		}else if(x<y && y>temp.back()){
			ans += 'R';
			a.pop_back();
			temp.push_back(y);
		}else if(x>y && y>temp.back()){

			ans += 'R';
			a.pop_back();
			temp.push_back(y);

		}else if(x>y && x>temp.back()){
			ans += 'L';
			a.pop_front();
			temp.push_back(x);
		}else{
			break;
		}
	}

	if(a.size()!=0){
		if(a.front()>temp.back()){
			ans+='L';
		}
	}

	cout<<ans;


	//
}


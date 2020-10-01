#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

struct fenwick_tree{

	vector<int> ft;
	int n;

	void init(int _n){
		n = _n+10;
		ft.resize(n,0);
	}

	void add(int i,int val){

		//index is 1 based
		while(i<=n){
			ft[i] += val;
			i += (i&(-i));
		}

	}

	void query(int i){

		int ans = 0;
		while(i>0){

			ans += ft[i];
			i -= (i&(-i));

		}

		cout<<ans;
	}
}t;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n;
	cin>>n;

	t.init(n);

	for(int i=1;i<=n;i++){
		int num;
		cin>>num;
		t.add(i,num);
	}

	t.query(2);


}

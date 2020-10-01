#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool issafe(vector<string> a,string str,int row,int col,int len){
	if(len==str.size()){
		return true;
	}

	if(a[row][col]!=str[len]){
		return 0;
	}

	vector<pair<int,int>> dir{{0,1},{1,0},{0,-1},{-1,0}};
	bool ans = 0;
	for(auto i:dir){
		int x = row + i.first;
		int y = col + i.second;

		ans = issafe(a,str,(a.size()+x)%a.size(),(a[0].size()+y)%a[0].size(),len+1);
		if(ans){

			return 1;
		}
	}

	return 0;

}

bool func(vector<string> a,string str){

	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[0].size();j++){
			if(issafe(a,str,i,j,0)){
				return 1;
			}
		}
	}

	return 0;
}

int fun(vector<string> a){

	for(int i=1;i<a.size()-1;i++){
		for(int j=1;j<a[0].size()-1;j++){
			if(a[i][j] == '0'){
				if(a[i+1][j]=='X' && a[i][j+1]=='X' && a[i-1][j] == 'X' && a[i][j-1] == 'X'){
					a[i][j] = '0';
				}
			}
		}
	}
}
bool solve(vector<string> A,string str){
	vector<pair<int,int>> dir{{0,1},{1,0},{0,-1},{-1,0}};

	queue<pair<int,int>> q;
	int x = 0;
	for (int i = 0; i < A.size(); ++i)
	{
		for(int j = 0;j<A[0].size();j++){

			if(A[i][j]==str[x]){

				// while(str[x]==A[i][j]){
				// 	x++;
				// }
				// x--;
				q.push({i,j});
				x++;

				while(!q.empty()){

					if(x>str.size()){
						return 1;
					}
					pair<int,int> p = q.front();

					q.pop();

					for(auto xy:dir){
						int newx = p.first + xy.first;
						int newy = p.second + xy.second;

						if(A[(A.size()+newx)%A.size()][(A.size()+newy)%A[0].size()]==str[x]){
							q.push({(A.size()+newx)%A.size(),(A.size()+newy)%A[0].size()});
							x++;
						}
					}

				}

				if(x>str.size()){
					return 1;
				}
			}

		}
	}

	if(x>str.size()){
		return 1;
	}

	return 0;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;
	vector<string> a;

	for(int i=0;i<n;i++){
		string s;
		cin>>s;

		a.push_back(s);
	}

	string str;
	cin>>str;

	// auto itr = unique(str.begin(), str.end());
	// str.resize(std::distance(str.begin(),itr));
	// cout<<solve(a,str);

	cout<<func(a,str);


	//}
}

/*[
  ["ABCE"],
  ["SFCS"],
  ["ADEE"]
]
*/
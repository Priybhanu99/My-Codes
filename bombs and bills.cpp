#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

   #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
      #endif

  int n,m,k;

  cin>>n>>m>>k;

  char a[n][m];
  vector<int> rows,cols;
  for(int i=0;i<n;i++){
    for(int j= 0;j<m;j++){
      cin>>a[i][j];
      if(a[i][j]=='B'){
        rows.push_back(i);
        cols.push_back(j);
      }
    }
  }



  set<pair<int,int>> set;

  for(auto i:rows){
    for(int j=0;j<m;j++){

      if(a[i][j]!='B'){
        set.insert(make_pair(i,j));
      }
    }
  }

  for(auto i:cols){
    for(int j=0;j<n;j++){

      if(a[j][i]!='B'){
        set.insert(make_pair(j,i));
      }
    }
  }

  // cout<<"set: \n";
  // for(auto i:set){
  //   cout<<i.first<<" "<<i.second<<"\n";
  // }
  // cout<<"\n";

  priority_queue<int,vector<int>, greater<int> > safe;
  for (int i = 0; i < n; ++i)
  {
    for(int j=0;j<m;j++){
      if(a[i][j]!='B' && set.count(make_pair(i,j))==0){
        // cout<<a[i][j]<<",";
        safe.push(a[i][j]-'0');
      }
    }
  }

  // cout<<"safe: \n";
  // for(auto i:safe){
  //   cout<<i<<" ";
  // }
  // cout<<"\n";

  int ans = 0;


  
  priority_queue<int> temp;
  for(auto i:set){
    temp.push((a[i.first][i.second])-'0');
  }


  while(k--){
    //if there is a value in temp which is greater than safe then swap them.
    if(temp.size()==0 || safe.size()==0){
      break;
    }

    int num1 = temp.top();
    int num2 = safe.top();

    if(num1<=num2){
      break;
    }


    if(num1>num2){

      temp.pop();
      safe.pop();
      safe.push(num1);
    }

  }

  while(!safe.empty()){
    // cout<<safe.top()<<" ";
    ans += safe.top();
    safe.pop();
  }

  cout<<ans;

  // sort(bombline.begin(),bombline.end());
  // unique(bombline.begin(),bombline.end());

  // for(auto i:set){
  //   cout<<i.first<<" "<<i.second<<" "<<a[i.first][i.second]<<" \n";
  // }



  


  return 0;
}

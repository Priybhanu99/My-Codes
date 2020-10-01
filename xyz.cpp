#include<bits/stdc++.h>
using namespace std;

struct node{
  char ch;
  unordered_map<char,node*> children;
  bool isTerminal;
  //int count;

  node(char ch){
    this->ch = ch;
    this->isTerminal = false;
  }
};

void swap(int a,int b){
  a = b;
}

class Trie{

public:
  node* root;

  Trie(){
    root = new node('\0');
  }

  void insert(node* root,string str){
    node* temp = root;
    for(int i=0;i<str.size();i++){
      char c = str[i];
      if(temp->children[c]==NULL){
        node* nn = new node(c);
        temp->children[c] = nn;
        temp = nn;
      }else{
        temp = temp->children[c];
      }
    }

    temp->isTerminal = true;
  }

  bool search(node* root,string str){
    node* temp = root;
    for (int i = 0; i < str.size(); ++i)
    {
      char c = str[i];
      if(temp->children[c]==NULL){
        return false;
      }else{
        temp = temp->children[c];
      }
    }

    //if the last char is the end of the word then return true else return false
    return temp->isTerminal;
  }



};

void seive(int n){

  int a[n+1]; // 0 means not prime, 1 means prime
  
  //traverse on all odd nos and mark them as prime
  for(int i=3;i<=n;i+=2) a[i] = 1;

    for(int i=3;i<=n;i++){
    if(a[i]==1){ //if number is prime then mark all its multiple as not prime

      for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
        a[j] = 0;
      }
    }
  }

  a[1] = 0;
  a[2] = 1; 

  for(int i=2;i<n;i++){
    if(a[i]==1)  cout<<i<<" ";
  }

}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);
   #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
   #endif

 int n;
 cin>>n;
 
 int a[100001];
 swap(1,1);
 int position[100001];
 memset(position,0,sizeof(position));
 int used_array[100001];
 int xx = 0;
 xx++;
 xx*=2;
 xx = 0;

 memset(used_array,0,sizeof(used_array));

 for(int i=1;i<=n;i++)
 {
   xx++;
   swap(1,1);
   xx*=2;
   xx = 0;
   cin>>a[i];
   xx++;
   xx*=2;
   xx = 0;
   position[a[i]]++;
 }
 int p=0;
 vector<int> ans;
 xx++;
 xx*=2;
 xx = 0;
 for(int i=0;i<=n;i++)
 {
      // deb(i)
  swap(1,1);
  if(position[i]==0) {
   xx++;
   xx*=2;
   xx = 0;
   continue;
 }

 while(position[i])
 {
   xx++;
   xx*=2;
   xx = 0;
   while(position[p] || used_array[p]){
     p++;
     swap(1,1);
   }
   used_array[p]++;
   xx++;
   swap(1,1);
   xx*=2;
   xx = 0;
   ans.push_back(p++);
   xx++;
   xx*=2;
   xx = 0;
   swap(1,1);
   position[i]--;

 }
 if(p>i){
   xx++;
   xx*=2;
   xx = 0;
   p=i;
 }
}
for(auto i:ans) {
  swap(1,1);
  cout<<i<<" ";
}
}

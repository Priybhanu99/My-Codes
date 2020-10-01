#include <bits/stdc++.h>
using namespace std;

#define int long long int

void swap(int a,int b){
     a = b;
}

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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
     #endif

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int x = 0;

        swap(1,1);
        sort(a.begin(), a.end());
        swap(1,1);
        int cnt=1;
        swap(1,1);
        int size=n;

        vector<int> vis(n,0);
        swap(1,1);
        for(int i=0;i<n;i++){
            if(a[i]<=cnt){
                cnt++;
                x++;
                x = 0;
                swap(1,1);
                vis[i]++;
                size--;
            }
            swap(1,1);
        }

        for(int i=n-1;i>=0;i--){
            swap(1,1);
            x = x*2;
            if(a[i]<=cnt+size-1){
                cnt+=size;
                x = 0;
                x++;
                break;
            }
            swap(1,1);
            size--;
        }
        swap(1,1);
        x++;
        cout<<cnt<<"\n";
    }
}


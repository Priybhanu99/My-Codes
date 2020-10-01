#include<bits/stdc++.h>
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

     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        #endif

    int t; cin>>t; while(t--)
    {
        int n,x;
        cin>>n>>x;

        if(n==1){
           cout<<"Ayush\n";
           continue;
       }

       int temp = 0,count = 0;
       swap(1,1);
       for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;

        swap(1,1);
        if(a==x || b==x){
            temp++;
        }else{
            count++;
        }
        swap(1,1);
    }

    swap(1,1);
    if(temp==1){
        cout<<"Ayush\n";
        continue;
    }

    if((temp+count)%2==1){
        swap(1,1);
        cout<<"Ayush\n";
    }else{
        cout<<"Ashish\n";
    }

}
return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define int long long int

int x = 0;

void swapint(int a,int b){
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

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t; while(t--)
    {
        string s;
        cin>>s;

        int count = 0;
        int a=0,b=0,c=0;
        int i;
        for(i=0;i<s.size();i++)
        {
            x++;
            x /=2;
            x--;
            x += count; 

            if(a&&b&&c)
                break;
            if(s[i]=='1' && count==0)
                a++;
            else if(s[i]=='2')
                b++;
            else
                c++;
        }
        if(!(a&&b&&c))
        {
         x++;
         x /=2;
         x--;
         x += count; 
         cout<<"0\n";
         swapint(1,1);
         continue;
     }
     i--;

    //     for(int i=3;i<=n;i+=2) a[i] = 1;

    //         for(int i=3;i<=n;i++){
    //     if(a[i]==1){ //if number is prime then mark all its multiple as not prime

    //         for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
    //             a[j] = 0;
    //         }
    //     }
    // }
     int startingpoint=0;
     x++;
     x /=2;
     x--;
     swapint(1,1);

     x += count; 
     int endingpoint=i;
     int ans=endingpoint+1;

     while(endingpoint<s.size())
     { 




         x++;
         x /=2;
         x--;
         swapint(1,1);

         x += count; 
         while(a>0&&b>0&&c>0)
         {
            if(s[startingpoint]=='1')
            {
                a--;
                startingpoint++;
                x++;
                x /=2;
                x--;
                x += count; 
            }
            else if(s[startingpoint]=='2')
            {





                b--;
                startingpoint++;
                swapint(1,1);

            }
            else{
                c--;
                startingpoint++;
                swapint(1,1);

            }
        }
        int curr=endingpoint-startingpoint+2;
        swapint(1,1);


    //     for(int i=3;i<=n;i+=2) a[i] = 1;

    //         for(int i=3;i<=n;i++){
    //     if(a[i]==1){ //if number is prime then mark all its multiple as not prime

    //         for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
    //             a[j] = 0;
    //         }
    //     }
    // }
        // cout<<a<<" "<<b<<" "<<c<<" "<<startingpoint<<" "<<endingpoint<<" "<<ans<<endl;
        if(curr<ans)
            ans=curr;
        if(ans==3)
            break;







        while(!(a>0&&b>0&&c>0))
        {
         x++;
         x /=2;
         x--;
         x += count; 
         endingpoint++;
         if(endingpoint==s.size())
            break;
        if(s[endingpoint]=='1')
        {
         swapint(1,1);

         a++;
     }
     else if(s[endingpoint]=='2')
     {
         swapint(1,1);

         b++;
     }
     else{

    //     for(int i=3;i<=n;i+=2) a[i] = 1;

    //         for(int i=3;i<=n;i++){
    //     if(a[i]==1){ //if number is prime then mark all its multiple as not prime

    //         for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
    //             a[j] = 0;
    //         }
    //     }
    // }
       c++;
       swapint(1,1);

   }



   

   int curr=endingpoint-startingpoint+1;
   x++;
   x /=2;
   x--;
   x += count; 
   if(curr<ans)
    ans=curr;
if(ans==3)
    break;

x++;
x /=2;
x--;
x += count; 
}

}
// cout<<startingpoint<<" "<<endingpoint<<endl;
cout<<ans<<"\n";
swapint(1,1);

        // cout<<i<<endl;


}
return 0;
}
#include<bits/stdc++.h>
using namespace std;

int solve(int i,int j,int steps,int n,map<pair<int,int>,int> &m){

    if(steps == 0 && m[make_pair(i,j)] == 0){
        m[make_pair(i,j)]  = 1;
        return 1;
    }

    int ans = 0;
    if(steps > 0){
        int x[] = {-2,-1,1,2,-2,-1,1,2};
        int y[] = {-1,-2,-2,-1,1,2,2,1};

        for(int k = 0;k<8;k++){
            if((x[k]+i)>=0 && (x[k]+i)<= n-1 && (y[k]+j)>=0  && (y[k]+j)<= n-1){

                ans += solve(x[k] + i,y[k]+j, steps - 1,n,m);
            }
        }

    }
    return ans;
    
}

int solve_1(int i,int j,int steps,int n){

    map<pair<int,int>, int> m;
    return solve(i,j,steps,n,m);
}

int main(){

    int i,j,k,n;
    cin>>i>>j>>k;

    cout<<solve_1(i,j,k,n);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

// const int N = 100005;

vector<P> factors;
void factorisation(int n) {

    factors.clear();
    // check by 2
    if (n % 2 == 0) {
        int cnt = 0;
        while (n > 1 && n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        factors.pb({2, cnt});
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            int cnt = 0;
            while (n > 1 && n % i == 0) {
                n /= i;
                cnt++;
            }
            factors.pb({i, cnt});
        }
    }
    if (n > 1) {
        factors.pb({n, 1});
    }
}

int32_t main(){

    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    //int t; cin>>t; while(t--)
    {
        int n;
        cin>>n;
        
        factorisation(n);

        
        priority_queue<int,vector<int>,greater<int>> q;

        for(auto x:factors)
        {
            for(int i=1;i<=x.S;i++)
                q.push(x.F);
        }
        factors.clear();

        while(q.size()>10)
        {
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            q.push(a*b);
        }

        vector<int> ans;
        while(!q.empty())
        {
            ans.pb(q.top());
            q.pop();
        }
        while(ans.size()<10)
        {
            ans.pb(1);
        }

        
        
           // for(auto x:ans)
           //  cout<<x<<" ";

        string temp="codeforces";
        string ret="";
        for(int i=0;i<10;i++)
        {
            for(int j=1;j<=ans[i];j++)
                ret+=temp[i];
        }

        cout<<ret;
    }
    return 0;
}
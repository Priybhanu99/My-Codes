vector<vector<int>> subset(vector<int> A,int curr,int n){
    if(curr == n){
        
        vector<vector<int>> base;
        vector<int> x(0);
        base.push_back(x);
        return base;
    }
    
    vector<vector<int>> ans;
    vector<vector<int>> a = subset(A,curr+1,n);
    
    
    for(auto i:a){
        ans.push_back(i);
        i.insert(i.begin(),A[curr]);
        ans.push_back(i);
    }
    
    return ans;
    
}










vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> ans = subset(A,0,A.size());
    vector<vector<int>> ans2;
    for(auto i:ans){
        sort(i.begin(),i.end());
        ans2.push_back(i);
    }
    
    sort(ans2.begin(),ans2.end());
    
    
    
    return ans2;
}

class Solution {
public:

    void helper(int k, int n, vector<vector<int>>& ans, vector<int> v){
        if(v.size()==k && n==0){
            ans.push_back(v);
            return;
        }
        if(v.size() < k){
            for (int i = v.empty() ? 1 : v.back() + 1; i <= 9; ++i) {
                if (n - i < 0) 
                    break;
                v.push_back(i);
                helper(k,n-i,ans,v);
                v.pop_back();
            }
        }   
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> ans;
        vector<int> v;
        helper(k,n,ans,v);
        return ans;
    }  
};


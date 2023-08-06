class Solution{
    public:
    //Complete this function
    void solve(int ind,string s,vector<string>&ans)
    {
        
        if(ind==s.length())
        {
             ans.push_back(s);
             return;
        }
        for(int i=ind;i<s.size();i++)
        {
            swap(s[i],s[ind]);
            solve(ind+1,s,ans);
            swap(s[i],s[ind]);
        }

    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string>ans;
        solve(0,S,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

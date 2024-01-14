//User function Template for C++

class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        map<vector<int>,int>mp;
        for(auto v:matrix)
        {
            mp[v]++;
        }
        vector<int>v;
        for(int i=M-1;i>=0;i--)
        {
            if(mp[matrix[i]]>1)
            {
                v.push_back(i);
                mp[matrix[i]]--;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    } 
};

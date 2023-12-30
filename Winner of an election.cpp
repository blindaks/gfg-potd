class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>mp;
        int ans=INT_MIN;
        string s="";
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>ans)
            {
                ans=it.second;
                s=it.first;
            }
        }
        vector<string>v;
        v.push_back(s);
        v.push_back(to_string(ans));
        return v;
    }
};

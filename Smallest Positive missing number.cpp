class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int ans=1;
        unordered_map<int,bool>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=true;
            while(mp[ans]!=false)
            ans++;
        }
        return ans;
        // Your code here
    } 
};

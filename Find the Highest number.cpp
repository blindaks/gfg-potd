class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int ans=a[0];
        for(int i=1;i<a.size();i++)
        {
            if(a[i]>a[i-1])
            ans=a[i];
        }
        return ans;
    }
};

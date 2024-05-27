class Solution {
public:
    int specialArray(vector<int>& nums) {
        int ans=-1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0;int h=n-1;
        int mid=0;
        for(int i=1;i<=n;i++)
        {
            int count=0;
            for(int x=0;x<n;x++)
            {
                if(nums[x]>=i)
                count++;
            }
            if(count==i)
            return i;
        }
        return -1;
    }
};

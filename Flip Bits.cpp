class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int cnt_1=0,cnt_0=0,max_0=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) 
            {
                cnt_0++;
                max_0=max(max_0,cnt_0);
            }
            else
            {
                cnt_1++;
                cnt_0--;
            }
            if(cnt_0<0) 
            cnt_0=0;
        }
        return max_0+cnt_1;
        // Your code goes here
    }
};

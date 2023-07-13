class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        vector<int>v;
        v.push_back(0);
        vector<int>a;
        for(int i=0;i<n;i++)
        a.push_back(arr[i]);
        sort(a.begin(),a.end());
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            c++;
            else
            {
                if(find(v.begin(),v.end(),c)==v.end())
                {
                    v.push_back(c);
                    c=1;
                }
                else
                return false;
            }
        }
        if(find(v.begin(),v.end(),c)==v.end())
        return true;
        return false;
    }
};

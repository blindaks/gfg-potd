class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int s=-1;int e=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x && s==-1)
            {
                s=i;
                e=i;
            }
            else if(arr[i]==x && s!=-1)
            {
                e=i;
            }
        }
        return {s,e};
    }
};

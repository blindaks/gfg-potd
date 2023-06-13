class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int>v;vector<int>x;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                v.push_back(arr[i]);
                if(arr[i]>=0)
                x.push_back(arr[i]);
            }
            
            for(int i=0;i<v.size();i++)
            {
                arr[i]=v[i];
            }
            for(int i=0;i<x.size();i++)
            {
                arr[i+v.size()]=x[i];
            }
            // Your code goes here
        }
};

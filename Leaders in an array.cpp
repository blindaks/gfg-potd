class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int x=INT_MIN;
        vector<int>v;
        v.push_back(a[n-1]);
        x=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=x)
            {
                x=a[i];
                v.insert(v.begin(),x);
            }
        }
        return v;
    }
};

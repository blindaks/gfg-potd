class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            long long num=a[i];
            for(int j=i+1;j<a.size();j++)
            {
                num*=a[j];
                if(num<k)
                ans++;
                else
                break;
            }
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<k)
            ans++;
        }
        return ans;
    }
};

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long sum=0;long s=0;
        for(int i=0;i<K;i++)
        {
            s+=Arr[i];
        }
        sum=s;
        int x=0;int y=K;
        while(y<N)
        {
            s-=Arr[x];
            s+=Arr[y];
            sum=max(sum,s);
            x++;
            y++;
        }
        return sum;
    }
};

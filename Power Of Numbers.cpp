class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
        if(N==0) return 0;
       if(R==0) return 1;
        long long m=1000000007;
        //this means it is an even no
        if(R%2==0) {
            long long ans=power(N,R/2);
            return (ans%m * ans%m)%m;
        }
        if(R%2!=0){
            long long ans=power(N,(R-1)/2);
            return (ans%m * ans%m)*N%m;
        }
        return -1;
       //Your code here
        
    }

};

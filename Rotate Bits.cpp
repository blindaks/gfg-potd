class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d=d%16;
            int num1=n<<d;
            num1=(num1/(pow(2,16)));
            unsigned int num2=n<<(16-d);
            num2=(num2/(pow(2,16)));
            return {(n<<d)%(65536)+num1,(n<<(16-d))%(65536)+num2};
        }
};

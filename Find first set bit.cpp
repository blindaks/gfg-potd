int x=1;
        while(n!=0)
        {
            if(n%2)
            {
                return x;
            }
            else
            {
                x++;
            }
            n/=2;
        }
        return 0;

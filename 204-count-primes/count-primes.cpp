class Solution {
public:
    int isPrime(int a)
    {
        vector<bool> vec(a+1,true);

        vec[0] = false;
        vec[1] = false;

        for(int i=2 ; i*i <= a; i++)
        {
            if(vec[i])
            {
                for(int j=i*i ; j<=a ; j+=i)
                {
                    vec[j]=false;
                }
            }
        }
        int ans = 0;
        for(int i=2 ; i<a; i++)
        {
            if(vec[i])
            ans++;
        }
        return ans;

    }

    int countPrimes(int n) {
        if( n<=2 )
        return 0;

        int ans = isPrime(n); 
        return ans;
    }
};
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long csum=arr[0],index=0;
        vector<int> res;
        int i=1;
        for(i=1;i<n+1;i++)
        {
            while((csum>s)&&(index<i-1))
            {
                csum=csum-arr[index];
                index++;
            }
            if(csum==s)
            {
                res.push_back(index+1);
                res.push_back(i);
                return res;
            }
            if(i<n)
            {
                csum=csum+arr[i];
            }
        }
        if(csum==s)
        {
            res.push_back(index+1);
            res.push_back(i);
            return res;
        }
        else
        {
            res.push_back(-1);
            return res;
        }
        
        
        
    }
};

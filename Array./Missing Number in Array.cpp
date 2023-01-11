class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) 
    {
        sort(array.begin(),array.end());
        for(int i=0;i<n-1;i++)
        {
            if(array[i]!=(i+1))
            return array[i]-1;
            
        }
        return array[n-2]+1;
    }
};

    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> v;
        int cl=a[n-1];
        v.push_back(cl);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=cl)
            {
                cl=a[i];
                v.push_back(cl);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

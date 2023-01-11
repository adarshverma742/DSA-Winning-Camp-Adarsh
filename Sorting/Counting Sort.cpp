//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr)
    {
        int count[256];
        int n=arr.length();
        for(int i=0;i<256;i++)
        count[i]=0;
        for(int i=0;i<n;i++)
        count[arr[i]]++;
        for(int i=1;i<256;i++)
        count[i]=count[i-1]+count[i];
        char output[n];
        for(int i=n-1;i>=0;i--)
        {
           output[count[arr[i]]-1]=arr[i];
           count[arr[i]]--;
        }
        string ans;
        for(int i=0;i<n;i++)
        ans.push_back(output[i]);
        return ans;
        
        
    }
};



class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        unordered_set<int> s(arr,arr+n);
        int maxx=arr[0];
        for(int i=1;i<n;i++)
        maxx=max(maxx,arr[i]);
        for(int i=1;i<=maxx+1;i++)
        {
            if(s.find(i)==s.end())
            return i;
        }
    } 
};

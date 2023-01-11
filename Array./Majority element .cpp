//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map<int, int> m;
    for(int i=0;i<size;i++)
    m[a[i]]++;
    int count=0;
    int val;
    for(auto a:m)
    {
        if(a.second>count)
        {
            count=a.second;
            val=a.first;
        }
    }
    if(count>(size/2))
    return val;
    else
    return -1;
        

    }
};

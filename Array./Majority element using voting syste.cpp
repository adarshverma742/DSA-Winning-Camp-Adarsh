class Solution {
public:
    int majorityElement(vector<int>& arr) 
    {
        int index = 0 , count = 1;
        int n = arr.size();
        for(int i=0 ; i<n ; i++)
        {
            if(arr[index] == arr[i])
            count++;
            else
            count--;
            if(count == 0)
            {
                index = i;
                count = 1;
            }
        }
        return arr[index];


    }
};

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high)
        {
            int x=partition(arr,low,high);
            quickSort(arr,low,x);
            quickSort(arr,x+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
    
    int pivot=arr[low];
    int i=low-1,j=high+1;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot);
        do
        j--;
        while(arr[j]>pivot);
        if(i>=j)
        return j;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }
};

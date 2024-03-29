class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1=m-l+1,n2=r-m;
        int left[n1],right[n2];
        int i=0,j=0,k=0;
        for(i=0;i<n1;i++)
        left[i]=arr[l+i];
        for(j=0;j<n2;j++)
        right[j]=arr[m+1+j];
        i=0,j=0,k=l;
        while(i<n1&&j<n2)
        {
            if(left[i]<=right[j])
            arr[k++]=left[i++];
            else
            arr[k++]=right[j++];
        }
        while(i<n1)
        arr[k++]=left[i++];
        while(j<n2)
        arr[k++]=right[j++];
    }
        
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(r>l)
        {
           int m=l+(r-l)/2;
           mergeSort(arr,l,m);
           mergeSort(arr,m+1,r);
           merge(arr,l,m,r);
        }
       
    }
};

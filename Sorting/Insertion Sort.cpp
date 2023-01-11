

/* The task is to complete insert() which is used 
   as shown below to implement insertionSort() */


    void insert(int arr[], int i)
    {
        
    
            int key=arr[i];
            int j=i-1;
            while(j>=0&&arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int i=1;
        for(i=1;i<n;i++)
        insert(arr,i);
    }



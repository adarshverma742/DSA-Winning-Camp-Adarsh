//User function Template for C++

void countSort(int arr[], int n, int d)
{
    int count[10];
    for(int i=0 ; i<10; i++)
    count[i]=0;
    for(int i=0; i<n; i++)
    count[(arr[i]/d)%10]++;
    for(int i=1 ;i<10;i++)
    count[i]=count[i-1]+count[i];
    int output[n];
    for(int i=n-1; i>=0; i--)
    {
        output[count[(arr[i]/d)%10]-1]=arr[i];
        count[(arr[i]/d)%10]--;
    }
    for(int i=0; i<n; i++)
    arr[i]=output[i];
    
}
void radixSort(int arr[], int n) 
{ 
    int maxi=INT_MIN;
    for(int i=0; i<n; i++)
    maxi=max(maxi,arr[i]);
    for(int d=1; maxi/d>0 ; d=d*10)
    countSort(arr, n, d);
    
} 

//User function Template for C

void sort012(int a[], int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) c0++;
        if(a[i]==1) c1++;
        if(a[i]==2) c2++;
    }
    int i=0;
    while(c0)
    {
        a[i]=0;
        c0--;
        i++;
    }
    while(c1)
    {
        a[i]=1;
        c1--;
        i++;
    }
    while(c2)
    {
        a[i]=2;
        c2--;
        i++;
    }
    
}

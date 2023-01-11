#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int *start=arr;
    int *endd=arr+n-1;

    while(start<endd)
    {
        int temp=*start;
        *start = *endd;
        *endd=temp;
        start++;
        endd--;
    }
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

void rev(vector<int> &v , int l, int h)
{
    while(l<h)
    {
        swap(v[l], v[h]);
        l++;
        h--;
    }
}
void rightrotation (vector<int> &v, int n , int k)
{
   rev(v,0,n-k-1);
   rev(v,n-k,n-1);
   rev(v, 0 ,n-1);
}
void leftrotation (vector<int> &v, int n , int k)
{
   rev(v,0,k-1);
   rev(v,k,n-1);
   rev(v, 0 ,n-1);
}
int main()
{
    vector<int> v={1,2,3,4,5};
    for(auto a:v)
        cout<<a<<" ";
    cout<<endl;
    int k , d;
    int n=v.size();
    cout<<" Enter the number of rotations : ";
    cin>>k;
    cout<<endl;
    cout<<" For right enter 0 , FOr left enter 1 : ";
    cin>>d;
    cout<<endl;
    if(k>n)
        k=k%n;


    if(d==0)
        rightrotation(v,n,k);
    else
        leftrotation(v,n,k);
    for(auto a:v)
        cout<<a<<" ";
    return 0;
}


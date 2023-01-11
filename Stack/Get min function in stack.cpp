//User function Template for C++


stack<int> as;
stack<int> _push(int arr[],int n)
{
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        s.push(arr[i]);
        if(as.empty())
        as.push(arr[i]);
        else if(arr[i]<=as.top())
        as.push(arr[i]);
    }
    return s;
    
    
    
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!s.empty())
    {
        int t=s.top();
    s.pop();
    cout<<as.top()<<" ";
    if(t==as.top())
    as.pop();
    }
    
}
    
    

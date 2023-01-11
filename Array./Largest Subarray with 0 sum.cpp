/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    { 
        unordered_map<int,int> m;
        int res=0,psum=0;
        for(int i=0;i<n;i++)
        {
            psum+=A[i];
            if(psum==0)
            res=i+1;
            if(m.find(psum)==m.end())
            m.insert({psum,i});
            if(m.find(psum)!=m.end())
            res=max(res,i-m[psum]);
        }
        return res;
    }
};

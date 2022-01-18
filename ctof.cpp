#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    
    //You need to complete this function
    double cToF(int C)
    {
        //Your code here
        double f;
        f=((9*C)/5)+32;
        return f;
    }
};

int main()
{
    int T;
    cin>>T;
    double C,F;
    
while(T--){
    cin>>C;
    Solution ob;
    cout<<floor(ob.cToF(C))<<endl;
    return 0;
}
}

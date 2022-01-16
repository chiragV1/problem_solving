#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long long m=pow(10,9)+7;
        long long  sum=(a%m+b%m)%m;
        return sum;
    }
};

int main(int argc, char const *argv[])
{
    int T;
    cin>>T;
    while(T--){
        long a;
        long b;
        cin>>a>>b;
        Solution ob;
        cout<<ob.sumUnderModulo(a,b)<<endl;

    }
    return 0;
}

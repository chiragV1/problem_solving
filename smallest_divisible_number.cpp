#include<iostream>
#include <bits/stdc++.h>
#include<cstdio>
 using namespace std;

 class Solution{
public:
    long long getSmallestDivNum(long long n){
        // code here
        long long x=1;
         for(long long i=1;i<=n;i++){
            x = (x*i)/(__gcd(x,i));
        }
        return x;
    }
};
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.getSmallestDivNum(n)<<endl;
    }
    return 0;
}

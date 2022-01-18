#include<bits/stdc++.h>
#include<iostream>
 using namespace std;
 class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
         unsigned long long fact=1;
        for(unsigned long long i=1;i<=N;i++){
            fact = fact*i;
        }
        double dig=0;
        for(int i=2;i<=N;i++){
            dig+=log10(i);
        }
        
        return floor(dig)+1;
    }
};

 int main(){
     int T;
     cin>>T;
     while(T--){
     int N;
     cin>>N;
     Solution ob;
     cout<<ob.digitsInFactorial(N)<<endl;
     
     }
     return 0;
 }
 
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

int equilibriumPoint(long long a[], int n) {
    int sum =0;
    int leftsum=0;
    
    for(int i=0;i<n;i++){
        sum +=a[i];
    }
    
    for(int i=0;i<n;i++){
        sum -=a[i];
        
        if(leftsum==sum){
            return i+1;
            break;
        }
        
        leftsum += a[i];
    }
        // Your code here
        
        return -1;
        
       
}
};

int main (){

    long long t; //test cases
    cin>>t;
while(t--){
   long long n;//no of elements
    cin>>n;
    long long  a[n];
    
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
Solution ob;
    cout<<ob.equilibriumPoint(a,n)<<endl;
}

    return 0;
}
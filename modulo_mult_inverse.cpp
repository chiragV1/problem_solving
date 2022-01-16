#include<iostream>
#include<cstdio>

using namespace std;

class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        //Your code here
        int i=0;
       while(i<=m){
            if((a*i)%m==1){
                break;
            }
            i++;
            }
            if(i>=m){
                return -1;
            }
            else{
                return i;
            }
    }
};

int main(){
    int T;
    cin>>T;
    
    while(T--){
        int a , m;
        cin>>a>>m;
        Solution ob;
        cout<<ob.modInverse(a,m)<<endl;
    }
}
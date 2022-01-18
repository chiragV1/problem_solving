#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool isPrime(int N)
    {
        //Your code here
        if(N==1){
            return false;
        }
        
            for(int i=2;(i*i)<=N;i++){
                if(N%i==0){
                    return false;
                }
            }
        return true;
    }

};
int main(){
    int N;
    cin>>N;
    Solution ob;
    bool Test = ob.isPrime(N);
    if(Test=true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;
class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        //Your code here
        if(N==1){
            return A;
        }
        else{
            double r=(double)(B)/A;
            double R = pow(r,N-1);
            //Gp term is equal to A(r)^n-1
            
        double term = A*R;
        return term;
        }
    }
};
int main(){
    int T;
    cin>>T;
    while(T--){
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout<<floor(ob.termOfGP(A,B,N));
    }

    return 0;
}

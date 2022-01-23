#include<cstdio>
#include<iostream>

using namespace std;

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int arr[n];
        
        if(n==0||n==1){
            return n;
        }
        int j=0;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                arr[j]=a[i];
                j++;
            }
        }
        arr[j++]=a[n-1];
        
        for(int i=0;i<j;i++){
            a[i]=arr[i];
        }
        
        return j;
    }
};

int main(){
     int T;
     cin>>T;
     while(T--){
         Solution ob;
         int N;
         cin>>N;
         int a[N];
         for(int i=0;i<N;i++){
             cin>>a[i];
         }

         int n = ob.remove_duplicate(a, N);
         for(int i=0;i<n;i++){
             cout<<a[i]<<" ";
         }

}
    return 0;
}
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bill[n];
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>bill[i];
        sum += bill[i];
    }
    int k,paid;
    cin>>k;
    cin>>paid;

 int pay = (sum - bill[k])/2;
 if(pay==paid){ cout<<"BON APPETIT"<<endl;}
 else{cout<<paid-pay<<endl;}

    return 0;
}
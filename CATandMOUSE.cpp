#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    int x, y, z;

    cin>>x>>y>>z;

    if(abs(y-z)>abs(z-x)){
        cout<<"Cat A"<<endl;
    }
    if(abs(y-z)<abs(z-x)){
        cout<<"Cat B"<<endl;
    }
    if(abs(y-z)==abs(z-x)){
        cout<<"Mouse C"<<endl;
    }
    
    return 0;
}
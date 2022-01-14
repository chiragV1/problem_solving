#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main(){


    vector<int> keys;
    vector<int> drive;

    int n, m;
    cin>>n>>m;
    int budget;
    cin>>budget;
int x,y;
    for(int i=0;i<n;i++){
        cin>>x;
        keys.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>y;
        drive.push_back(y);
    }
    int res=-1;
    for(auto a:keys){
        for(auto b:drive){
            if(a+b<=budget){
                res = max(res, a+b);
            }
        }

    }

    cout<< res<<endl;
    






    return 0;
}
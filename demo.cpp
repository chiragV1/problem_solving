#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> res;

    for(int i =0;i<5;i++){
        res.push_back(i);
    }

    for(auto& i : res){
        if(i==2){
            cout<<&(i)-&res[0];
        }
    }
    
    return 0;
}

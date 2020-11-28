#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int N,v;
    cin>>N>>v;
    vector<int>a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    
    //存在の確認フラグ
    bool exist=false;
    for(int i=0;i<N;i++){
        if(a[i]==v){
            exist=true;
        }
    }

    if(exist){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
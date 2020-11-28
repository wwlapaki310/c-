#include<bits/stdc++.h>
using namespace std;

//部分和問題、整数の二進数問題とビット演算を用いて考える。
//(1<<i)は、二進数表現で右からi番目（最も右を0とする）のみが1であるような値を表す。
//(1<<4)=10000（2進数）=16（10進数）
int main(void)
{
    int N,W;
    cin>>N>>W;
    vector<int>a(N);
    for(int i=0;i<N;i++)cin>>a[i];
    
    //存在の確認フラグ
    bool exist=false;
    //(1<<N)=32, bit:0~31
    for(int bit=0;bit<(1<<N);++bit){
        int sum=0;
        cout<<"bit:"<<bit<<endl;
        for(int i=0;i<N;i++){
            //1<<i:1,2,4,8,16
            cout<<"1+i:"<<(1<<i)<<endl;
            if(bit &(1<<i)){
                sum+=a[i];
            }
        }
        cout<<"sum:"<<sum<<endl;
        if(sum==W)exist=true;
    }

    if(exist){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
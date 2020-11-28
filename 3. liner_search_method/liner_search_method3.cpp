#include<bits/stdc++.h>
using namespace std;
const int INF=20000000;//十分大きな値に。

int main(void)
{
    int N,v;
    cin>>N>>v;
    vector<int>a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    
    //最小値を求める
    int min_value=INF;
    for(int i=0;i<N;i++){
        if(a[i]<min_value){
            min_value=a[i];
        }
    }

    cout<<min_value<<endl;
}
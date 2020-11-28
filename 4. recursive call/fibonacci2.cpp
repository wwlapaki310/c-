#include<bits/stdc++.h>
using namespace std;

vector<long long>memo;

int fibo(int N)
{
    if(N==0) return 0;
    if(N==1) return 1;

    if(memo[N] !=-1)return memo[N];
    return memo[N]=fibo(N-1)+fibo(N-2);
}

int main(void)
{
    int N;
    cin>>N;
    memo.assign(N+1,-1);
    cout<<fibo(N)<<endl;

}
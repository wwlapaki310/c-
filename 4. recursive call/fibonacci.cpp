#include<bits/stdc++.h>
using namespace std;

int fibo(int N)
{
    if(N==0) return 0;
    if(N==1) return 1;
    int result=fibo(N-2)+fibo(N-1);
    return result;
}

int main(void)
{
    int N;
    cin>>N;
    cout<<fibo(N)<<endl;

}
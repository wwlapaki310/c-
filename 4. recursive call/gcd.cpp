#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}

int main(void)
{
    int m,n;
    cin>>m>>n;
    int a=max(m,n);
    int b=min(m,n);
    cout<<GCD(a,b)<<endl;

}
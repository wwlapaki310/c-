#include<bits/stdc++.h>
using namespace std;

int Calculate_Sum_from_1toN(int N)
{
    if(N==0) return 0;
    int result=N+Calculate_Sum_from_1toN(N-1);
    return result;
}

int main(void)
{
    int N;
    cin>>N;
    cout<<Calculate_Sum_from_1toN(N)<<endl;

}
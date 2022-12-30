#include<bits/stdc++.h>

using namespace std;

long int fac(int x)
{
    long int dp[x+1];
    dp[0] = 0;
    dp[1] = 1;
    int i = 2;
    while(i <= x)
    {
        dp[i] = dp[i-1] + dp[i-2];
        i++;
    }
    return dp[x];
}

int main()
{
    cout<<"Simple Factorial Program"<<endl;
    cout<<fac(100)<<endl;
    return 0;
}
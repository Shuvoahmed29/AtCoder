#include<iostream>
#include<stdio.h>
using namespace std;
fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int P,sum=0,i;
    cin>>P;
    for(i=1; i<=24; i++)
    {
        sum=sum+fact(i);
        if(sum==P)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}

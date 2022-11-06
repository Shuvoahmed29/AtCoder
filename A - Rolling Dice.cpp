#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(A<=B && B<=6*A)
    {
        cout <<"Yes"<< endl;
    }
    else
    {
        cout <<"No"<< endl;
    }
    return 0;
}

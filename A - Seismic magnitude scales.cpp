#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ans=1;
    cin>>a>>b;
    for(int i=b;i<a;i++)ans*=32;
    cout<<ans<<"\n";
    return 0;
}
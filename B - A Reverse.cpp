#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb push_back
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);
/*-----------------SHUVO AHMED--------------------------------*/
int main(){
    ll a,b;
    cin>>a>>b;
    string str;
    cin>>str;
    ll len=str.size();
    for(int i=0;i<a-1;i++){
        cout<<str[i];
    }
    for(int i=b-1;i>=a-1;i--){
        cout<<str[i];
    }
    for(int i=b;i<len;i++){
        cout<<str[i];
    }
    cout<<nl;
}
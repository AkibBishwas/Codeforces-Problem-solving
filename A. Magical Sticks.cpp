#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long int a,n,m,b,l;
    cin>>n;
    if(n<=2)
        cout<<1<<endl;
        else if(n%2==0)
            cout<<n/2<<endl;
    else
    {
        m=n/2;
        l=m+1;
        cout<<l<<endl;
    }
    }
    return 0;
}

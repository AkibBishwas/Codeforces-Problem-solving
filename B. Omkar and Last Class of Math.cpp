#include<bits/stdc++.h>
using namespace std;
void solve(long long int n){
    long long int a,b,i;
    cin>>n;
    if(n%2==0)
    {
        a=n/2;
        b=n/2;
         cout<<a<<" "<<b;
    }
    else
    {
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0){
                    a=n/i;
                  b=n-a;
                cout<<a<<" "<<b<<endl;
                return;
        }
    }
      cout<<1<<" "<<n-1<<endl;
    }
     cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        solve(n);
    }
    return 0;
}

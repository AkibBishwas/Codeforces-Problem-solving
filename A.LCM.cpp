#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long int m,n,a,b,c,l,k,x,y,i,j;
    cin>>a>>b;
    if(b%a==0)
        cout<<a<<" "<<b<<endl;
 else if(a*2<b)
    {
        c=a*2;
        cout<<a<<" "<<c<<endl;
    }
    else
        cout<<-1<<" "<<-1<<endl;
    }
         return 0;

}

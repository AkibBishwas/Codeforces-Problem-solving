#include<bits/stdc++.h>
using namespace std;
long long int number(long long int n, long long int k)
{
    long long int i,j,l,h,a,b,c;
    if(n%2==0){
    if( n/2>=k){
        b=(k*2)-1;
         return b;
    }
    else if(n/2<=k)
    {
        h=(k-(n/2))*2;
        return h;
    }
    }
   else
    {
          if( (n/2)+1>=k){
        b=(k*2)-1;
         return b;
    }
    else if(n/2<=k)
    {
        h=(k-(n/2));
        if(h>1){
        c=(h-1)*2;
        return c;
        }
    }
    }

}
int main()
{

    long long int n,k,l;
    cin>>n>>k;
    l=number(n,k);
    cout<<l<<endl;
    return 0;
}


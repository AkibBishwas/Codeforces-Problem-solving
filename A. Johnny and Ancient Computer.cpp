#include<bits/stdc++.h>
using namespace std;
int reg(long long int a,  long long int b)
{
  long long  int c,m,n,l,k,j,i,p;
    if(a==b)
        return 0;
    if(a>b)
    swap(a,b);
        for(i=1;i<b;i++){
       m  =     pow(8,i);
       l=i;
       p=a*m;
       if(p>=b)
        break;
        }
        k=pow(8,l-1);
        n=k*a;
        if(p==b)
            return l;
     else   if(n*4==b)
            return l;
        else if (n*2==b)
            return l;
        else
            return -1;

    }
    int main()
    {
        int t;
        cin>>t;
        while(t--){
     long long   int a,m,n;
        cin>>m>>n;
        a=reg(m,n);
        cout<<a<<endl;
        }
        return 0;
    }

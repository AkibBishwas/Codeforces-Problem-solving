#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
   long long  int a,k,m,n,i,j,b,ck1,ck2;

   cin>>a;
   while(a--)
   {
    cin>>n>>k;
    ck1=0;
    ck2=0;
    if(n%2==0)
    ck1=1;
    if(k%2==0)
    ck2=1;
    if(ck1==0 && ck2==0  &&  sqrt(n)>=k)
    cout<<"YES"<<endl;
    else if(ck1==1 && ck2==0)
    cout<<"NO"<<endl;
    else if(ck2==0 && ck1==1)
    cout<<"NO"<<endl;
    else if(ck1==1 && ck2==1  &&  sqrt(n)>=k)
    cout<<"YES"<<endl;
     else if(ck1==1 && ck2==1 && n==k)
    cout<<"NO"<<endl;
    else if(n<k)
     cout<<"NO"<<endl;
     else
      cout<<"NO"<<endl;
   }
        return 0;
    }

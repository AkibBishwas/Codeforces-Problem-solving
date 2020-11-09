#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
   long long  int a,d,m=0,n,i,j,b,c;

   cin>>d;
   a=1;
   b=1;
   for(i=0;i<d;i++)
   {
       c=a+b;
       m=m+a;
       a=b;
       b=c;

   }
   cout<<m<<endl;
   return 0;
}

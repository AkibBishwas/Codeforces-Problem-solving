#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
   long long  int a,d,n,i,j1,k,l,m,b,c;
   cin>>j1;
   while(j1--)
   {
       n=0;
   cin>>d;
   l=d/2;
   m=l+1;
   a= l*(l+1);
   b= m*m;
   c=b-a;
   k=b-c;
   if(c%2==0)
       n=1;
    if(a==k && n==0)
   {
        cout<<"YES"<<endl;
   for(i=1;i<d+1;i++)
   {
   if(i%2==0)
         cout<<i<<" ";
   }
   for(i=1;i<d+2;i++)
  {
     int n1=0;
      if(i%2==0)
      n1=1;
      if(n1==0)
      { if(i==c)
      continue;
      cout<<i<<" ";
      }
  }
   }
   else
   cout<<"NO"<<endl;
    }
 return 0;
}

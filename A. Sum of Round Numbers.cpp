#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a,max,min,h,j,k,i,l,c,v,b,n,m;
    int arr[100],arr1[100],arr2[100];
    cin>>m;
    while(m--)
   {
     cin>>n;
     c=0;
   while(n>0)
   {
       a=n%10;
       arr[c]=a;
       c++;
       n=n/10;
   }
   l=0;
   for(i=0;i<c;i++){
   if(arr[i]==0)
   continue;
   l++;
   }
   h=0;
   for(i=0,j=0,k=0;i<c,k<l;i++)
   {
       b=arr[j]*pow(10,i);
       j++;
       if(b==0)
       continue;
       arr1[k]=b;
       k++;
       h=h+b;

   }
   cout<<l<<endl;
   for(i=0;i<l;i++)
   cout<<arr1[i]<<" ";

   }
    return 0;

}

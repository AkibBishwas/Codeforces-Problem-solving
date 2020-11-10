#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void Trouble_sort(int n,int  A[],int B[])
{
    int i,j,temp,p;
      cin>>n;
    for(i=0;i<n;i++)
         cin>>A[i];
          for(i=0;i<n;i++)
         cin>>B[i];
         int C[501];
         for(i=0,j=0;i<n;i++)
         {
                C[j]=A[i];
             j++;
             }
             sort(C, C+j);

         int ck=0;
    for(i=0;i<n;i++)
    {
       if(A[i]!=C[i])
           ck=1;
           break;
    }
    int ck1=1;
    if(ck==1)
    {
         for(i=0;i<n-1;i++)
         {

             for(j=0;j<n-1;j++){
             if(A[j]>A[j+1]  && B[i]!=B[i+1] ){
                swap(A[j],A[j+1]);
                swap(B[i],B[i+1]);
                ck1=0;
             }
         }
    }
    }
    if(ck==0 || ck1==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
int main()
{
    int A[501],B[501],t,n;
    cin>>t;
    while(t--){
  Trouble_sort(n,A,B);
    }
    return 0;
}



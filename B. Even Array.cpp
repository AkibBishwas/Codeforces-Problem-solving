#include<bits/stdc++.h>
using namespace std;
//void Even_Array( int n, int A[] )
int main()
{
    int t;
  cin>>t;
  while(t--)
  {
    int i,j,k,l,m,b,z,x,c,v,n;
    int A[1000];
    cin>>n;
    c=0;
    l=0;
    for(i=0;i<n;i++){
        cin>>A[i];
        if(A[i]%2==0)
            l++;
        else
            c++;
    }
    int ck;
    if(n%2==0)
         ck=0;
    else
        ck=1;
    v=n/2;
    if(ck==0 && c!=l    || ck==1  && (l-1)!=c)
        cout<<-1<<endl;
    else
    {
        k=0;
        m=0;
        for(i=0;i<n;i=i+2)
        {
            if(A[i]%2!=0 || i%2!=0)
                k++;
        }
        for(i=1;i<n;i=i+2){
            if(A[i]%2==0 || i%2==0)
                m++;
        }
             x=min(k,m);
            cout<<x<<endl;
    }
}
    return 0;
}

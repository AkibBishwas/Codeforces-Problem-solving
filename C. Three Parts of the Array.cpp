#include<bits/stdc++.h>
using namespace std;
long long int sum_of_Array_part(long long int n, long long int A[])
{
 long long int i,k,l,j,s1,s3;
    i=0;
    j=n-1;
   s3=0;
   l=0;
    s1=0;
    while(i<=j)
    {
        if(s1<=s3)
        s1+=A[i++];
        else
            s3+=A[j--];
        if(s1==s3)
            l=max(l,s1);
    }
    return l;
    }
    int main()
    {
        long long int n,i,l;
        cin>>n;
        long long int A[n+1];
        for(i=0;i<n;i++)
            cin>>A[i];
        l=sum_of_Array_part( n, A);
        cout<<l<<endl;
        return 0;
    }

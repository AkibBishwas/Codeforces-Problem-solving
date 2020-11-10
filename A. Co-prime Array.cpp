#include<bits/stdc++.h>
using namespace std;
int GCD(long long int a, long long int b)
{
    if(b==0)
        return a;
    else
        return GCD(b, a%b);
}
void co_prime(long long int n,long long int A[])
{
    long long int a,b,m,l,k,j,i,p,c;
    vector <long long int> v;
    a=A[0];
    v.push_back(a);
   c=0;
    for(i=0;i<n-1;i++)
    {

        if(GCD(A[i],A[i+1])==1)
            v.push_back(A[i+1]);
        else
        {
               v.push_back(1);
            v.push_back(A[i+1]);
            c++;
        }
    }
    cout<<c<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
}
int main()
{
   long long int i, n,A[1000];
    cin>>n;
    for( i=0;i<n;i++)
        cin>>A[i];
    co_prime(n,A);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void fact(int A[])
{
    int i,k,j,l,c,b,a,n;
    int X[1000];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>A[i];

    sort(A , A+n);

    for(i=n-1,j=0;i>0;i--)
    {
        b=A[i]-A[i-1];
        X[j]=b;
        j++;
     }
     sort(X, X+j);
    cout<<X[0]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int A[1001];
    fact(A);
    }
    return 0;
}

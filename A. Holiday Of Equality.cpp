#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,m,n,k,i,j,b;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    k=0;
    for(i=0;i<n;i++)
    {
        k=k+arr[n-1]-arr[i];
    }
    cout<<k<<" ";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a,max,min,h,j,k,i,l,c,v,b,n,m;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    if(n==1)
    cout<<0;
    else
    {
    max=arr[0];
    min=arr[1];
    if(max<min)
     swap(max,min);
    for(i=2,j=0;i<n;i++)
    {
        if(max<arr[i] || min>arr[i] )
        {
              j++;
              if(max<arr[i])
              {
                  max=arr[i];
              }
              else
              min=arr[i];
        }
    }
    if(arr[0]==arr[1])
    cout<<j;
    else
    cout<<j+1;
    }

    return 0;

}

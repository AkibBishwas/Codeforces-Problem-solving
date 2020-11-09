#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int a,b,m,n,i,j,k,l,v,c,x,z,s,d,f,g;
    cin>>n;
    int arr[100],arr1[100];
    for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr , arr+n ,  greater<int>());
    cout<<arr[0]<<endl;
     cin>>m;
    for(i=0;i<m;i++)
    cin>>arr1[i];
    sort(arr1 , arr1+m ,  greater<int>());
     cout<<arr1[0]<<endl;



    return 0;
}

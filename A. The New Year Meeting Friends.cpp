#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3];
    int a,n,m,i,j,b,c;
    for(i=0;i<3;i++)
        cin>>arr[i];
    sort(arr,arr+3);
    if(arr[1]>arr[0])
    a=arr[1]-arr[0];
    else
        a=arr[0]-arr[1];
    if(arr[2]>arr[1])
        b=arr[2]-arr[1];
    else
        b=arr[1]-arr[2];
    c=a+b;
    cout<<c<<endl;
    return 0;
}

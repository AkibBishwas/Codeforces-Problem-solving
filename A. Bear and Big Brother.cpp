#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c=1,i,j,k;
    cin>>a>>b;
      i=0;
      k=a*3;
      j=b*2;
       while(k<=j)
       {
           c++;
           k=k*3;
           j=j*2;
           i++;
       }

    cout<<c;
    return 0;
}

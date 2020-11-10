#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int n)
{
  long long  int c,m,a,b,l,k,j,i,p;
        l=n/2;
  if(n%2!=0)
  {
      m=l+1;
      a=m*m;
      b=l*(l+1);
      p=b-a;

      return p;
  }
  else
  {
      b=l*l;
      a=l*(l+1);
      i=a-b;
      return i;
  }
  }
  int main()
  {
      long long int n,m;
      cin>>n;
      m=fun(n);
      cout<<m<<endl;
      return 0;
  }

#include<bits/stdc++.h>
using namespace std;
void reminder(long long int a, long long  int b, long long int c)
{
  long long int m,n,x,z,d,k,l,p,s;
  m=c%a;
  if(m==b)
    cout<<c<<endl;
else  if(m<b)
  {
      z=b-m;
      x=a-z;
      n=c-x;
      cout<<n<<endl;
  }
  else
  {
      d=m-b;
      l=c-d;
      cout<<l<<endl;
  }

}
int main()
{
 long long  int t;
    cin>>t;
    while(t--){
 long long int a,b,c;
    cin>>a>>b>>c;
    reminder(a,b,c);
    }
    return 0;
}

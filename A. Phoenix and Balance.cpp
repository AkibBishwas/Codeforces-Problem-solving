#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{

   long long int n,a,b,i,j,c,l,v,p;
    cin>>a;
   while(a--){
    cin>>n;
    v=0;p=0;
    for(i=1;i<n;i++)
    {

        if(i<n/2)
            v+=pow(2,i);

        else
        p+=pow(2,i);
    }
    l=v+pow(2,n);
    c=l-p;
    cout<<c<<endl;
   }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int area(int ab,int bc,int ca)
{
    double l,m,n,h,a,b,c;
    l=double(ab)/double(bc);
    m=double(ca)/l;
    c=sqrt(m);
    b=double(bc)/c;
     a=double(ab)/b;
     h=4*(a+b+c);
    return h;
}
int main()
{
    int a,b,c,l;
    cin>>a>>b>>c;
    l=area(a,b,c);
    cout<<l<<endl;
    return 0;
}

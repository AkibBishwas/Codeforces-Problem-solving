#include<bits/stdc++.h>
using namespace std;
void prime(int n, int m)
{
    int i,k,j,l,ck;
    cin>>n>>m;
    for(j=n+1;j<=100000;j++)
        {
             ck=0;
             for(i=2;i<=sqrt(j);i++){
                if(j%i==0){
                    ck=1;
                   continue;
                }
        }
    if(ck==0){
    if(j==m)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    break;
    }
}

}
int main()
{
    int n,m;
    prime(n,m);
    return 0;
}

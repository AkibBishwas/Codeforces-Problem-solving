#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long long int i,j,k,l,h=0;
    string str;
    cin>>k;
    for(i=0;i<k;i++)
    {
            cin>>str;
          if(str[0]=='I'){
            h=20+h;
          }
          else if(str[0]=='C')
          {

             h=6+h;
          }
          else if(str[0]=='T')
          {

              h=4+h;

          }
          else if(str[0]=='D')
          {

              h=12+h;

          }
          else if(str[0]=='O')
          {

              h=8+h;

          }
    }
    cout<<h<<endl;
    return 0;
}

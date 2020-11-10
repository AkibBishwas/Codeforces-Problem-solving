#include<bits/stdc++.h>
using namespace std;
void matrix_game(int n, int m, int A[50][50])
{
   int i,k,j,l;
   cin>>n>>m;
    set<int>q,w;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            {
                q.insert(i);
                w.insert(j);
            }
        }
    }
    k=n-q.size();
    l=m-w.size();
    int x=min(k,l);
    if(x==0 ||x%2==0 ||m==0)
        cout<<"Vivek"<<endl;
    else
        cout<<"Ashish"<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,A[50][50];
    matrix_game(a,b,A);

    }
    return 0;
}

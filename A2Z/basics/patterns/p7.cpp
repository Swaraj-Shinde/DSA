#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++) //for spaces
        {
            cout<<"-";
        }
        for(j=1;j<=2*i-1;j++) //for stars
        {
            cout<<"*";
        }
        for(j=1;j<=n-i;j++) //again for spaces
        {
            cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(j<=i)
            {
                cout<<j;
            }
            else if(j>=2*n-(i-1))
            {
                cout<<2*n-j+1;
            }
            else{
                cout<<"-";
            }
        }
        cout<<endl;
    }
    return 0;
}
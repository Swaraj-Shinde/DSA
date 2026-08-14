#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    char ch = 'A';
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"-";
        }
        for(j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        ch--;
        for(j=i;j>1;j--)
        {
            ch--;
            cout<<ch;
        }
        for(j=1;j<=n-i;j++)
        {
            cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}
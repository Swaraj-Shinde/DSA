#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        char ch = 'E';
        ch=ch-(i-1);
        for(j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    char ch = 'A';
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            char output = ch+(j-1);
            cout<<output;
        }
        cout<<endl;
    }
    return 0;
}
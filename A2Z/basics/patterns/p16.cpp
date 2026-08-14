#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    char ch = 'A';
    cin>>n;
    for(i=1;i<=n;i++)
    {
        char output = ch+(i-1);
        for(j=1;j<=i;j++)
        {
            cout<<output;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
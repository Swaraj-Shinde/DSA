#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n; //num, not total rows
    for(i=0;i<=2*n-2;i++)
    {
        for(j=0;j<=2*n-2;j++)
        {
            int top = i;
            int bottom = (2*n-2)-i;
            int left = j;
            int right = (2*n-2)-j;
            //matrix is actually min dist subtracted from n;
            cout<<n-min(min(top,bottom),min(left,right)); 
        }
        cout<<endl;
    }
    return 0;
}
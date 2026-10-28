#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        int first_elem=(row*(row-1))/2+1;
        if(row%2!=0) //ulta
        {
            int num=first_elem+row-1;
            while(num!=first_elem-1)
            {
                cout<<num<<" ";
                num--;
            }
            cout<<"\n";
        }
        else //sidha
        {
            int limit=first_elem+row;
            while(first_elem!=limit)
            {
                cout<<first_elem<<" ";
                first_elem++;
            }
            cout<<"\n";
        }
    }
    return 0;
}
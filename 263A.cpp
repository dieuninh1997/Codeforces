#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a[5][5],x,y;
    for(int i=1; i<=5;i++)
    {
        for(int j=1; j<=5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(3-x)+abs(3-y);


}
int main()
{
    solve();
    return 0;
}

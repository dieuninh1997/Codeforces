#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
    int n;
    cin>>n;
    for(int i=0; i<13;i++)
    {
        if(n%a[i]==0)
        {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";

}
int main()
{
    solve();
    return 0;
}

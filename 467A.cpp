#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;//so phong
    cin>>n;
    int dem=0;
    while(n--)
    {
        int p,q;//q la max, p la current
        cin>>p>>q;
        if(q-p >=2)
            dem++;
    }
    cout<<dem;

}
int main()
{
    solve();

    return 0;
}

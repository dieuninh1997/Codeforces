#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n, a,b,c;
    cin>>n>>m>>a;
    b=ceil((double)m/a);
    c=ceil((double)n/a);
    cout<<b*c;
    return 0;
}

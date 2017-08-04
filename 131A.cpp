#include<bits/stdc++.h>
using namespace std;
void cap(string s)
{
    int i=s.length();
    while(i>0)
    {
        s[i]=s[i]+32;
        i--;
    }
    cout<<s;
}
void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    int dem=0;
    if(isupper(s[0]))
    {
        dem=1;
       // cout<<"th1:";
        for(int i=1;i<n;i++)
        {
            if(isupper(s[i]))
                dem++;
            //cout<<dem<<endl;
        }
        if(dem==n)
        {
             if(s[0]>64 && s[0]<91)
                s[0]=s[0]+32;
                cap(s);
        }

        else
            cout<<s;
    }else
    {
       // cout<<"th2:";
        for(int i=1;i<n;i++)
        {
            if(isupper(s[i]))
                dem++;
         //   cout<<dem<<endl;
        }
        if(dem==n-1)
        {
            if(s[0]>96 && s[0]<123)
                s[0]=s[0]-32;
            cap(s);
        }
        else
            cout<<s;
    }

   //ŝ cout<<s;

}
int main()
{
    solve();
    return 0;
}


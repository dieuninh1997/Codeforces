#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string hq9plus="HQ9+";
    string s;
    cin>>s;
    int n=s.length();
    int len=hq9plus.length();
    //cout<<"len="<<n<<endl;
    for(int i=0; i<n;i++)
    {
        // cout<<s[i]<<endl;
        if(s[i]=='+')
        {
            int c=s[i];
            //cout<<"s[i]="<<s[i]<<" => "<<
            ++c;
            int j=hq9plus.find((char)c);
            if(j>=0 && j<=len)
            {
               //  cout<<j<<endl;
                cout<<"YES";
                exit(0);
            }
        }else
        {
            //cout<<"Else: ";

            int j=hq9plus.find(s[i]);//cout<<"j="<<j<<endl;
            if(j>=0 && j<=len)
            {

                cout<<"YES";
                exit(0);
            }
        }


    }
    cout<<"NO";

}
int main()
{
    solve();
    return 0;
}



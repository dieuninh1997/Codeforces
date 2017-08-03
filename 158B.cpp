#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int s1,s2,s3,s4;
    s1=s2=s3=s4=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)s1++;
        else if (x==2) s2++;
        else if(x==3)s3++;
        else if(x==4)s4++;
    }
    int kq=s4;
    if(s3<s1 && s3>0)
    {
            kq+=s3;
             s3=0;
            s1-=s3;
           // cout<<"\nS3>0 && s3<s1 : kq="<<kq<<"//s1="<<s1<<"//s2="<<s2<<"//s3="<<s3<<endl;
    }
    if(s3>0 && s3>s1)
        {

            kq+=s3;
            s1=0;
            s3=0;
          //   cout<<"\nS3>0 && s3>s1 : kq="<<kq<<"//s1="<<s1<<"//s2="<<s2<<"//s3="<<s3<<endl;
        }
      if(s1>0)
      {
          kq+=s1/4;
          s1=s1%4;
       //  cout<<"\nS1>0: kq="<<kq<<"//s1="<<s1<<"//s2="<<s2<<"//s3="<<s3<<endl;
      }
    if(s2>0)
    {
       // cout<<"\nSo2:";
        kq+=(s2/2);
        s2=s2%2;
       // cout<<"\nS2>0 : kq="<<kq<<"//s1="<<s1<<"//s2="<<s2<<"//s3="<<s3<<endl;
        //cout<<"  s2="<<s2<<"////Kq="<<kq<<endl;
    }
    int s=s1+s2*2+s3*3;
    while(s/4.0>0)
    {
        kq+=1;
        //cout<<"\nss="<<s<<"///kq="<<kq;
         s-=4;
//cout<<"\nThua: kq="<<kq<<"//s1="<<s1<<"//s2="<<s2<<"//s3="<<s3<<endl;

    }
    //cout<<"\ns1="<<s1<<"\ns2="<<s2<<"\ns3="<<s3<<"\nKq="<<kq;
    cout<<kq;

}
int main()
{
    solve();

    return 0;
}

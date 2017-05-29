#include<iostream>
using namespace std;



int main()
{
    int k,a,b;
    int flag=0;
    int ans;
    cin>>k>>a>>b;
    if(a<b)
    {
        a^=b;
        b^=a;
        a^=b;
    }
    int awin=a/k;
    int bwin=b/k;
    int al=a%k;
    int bl=b%k;
    if(a<k&&b<k)
    {
        flag++;
    }
    if(al&&!bwin||bl&&!awin)
    {
        flag++;
    }
    ans=awin+bwin;
    if(flag)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    return 0;
}
